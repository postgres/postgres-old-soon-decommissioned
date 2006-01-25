/*-------------------------------------------------------------------------
 *
 * nbtutils.c
 *	  Utility code for Postgres btree implementation.
 *
 * Portions Copyright (c) 1996-2005, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */

#include "postgres.h"

#include "access/genam.h"
#include "access/nbtree.h"
#include "catalog/catalog.h"
#include "executor/execdebug.h"


static void _bt_mark_scankey_required(ScanKey skey);
static bool _bt_check_rowcompare(ScanKey skey,
								 IndexTuple tuple, TupleDesc tupdesc,
								 ScanDirection dir, bool *continuescan);


/*
 * _bt_mkscankey
 *		Build an insertion scan key that contains comparison data from itup
 *		as well as comparator routines appropriate to the key datatypes.
 *
 *		The result is intended for use with _bt_compare().
 */
ScanKey
_bt_mkscankey(Relation rel, IndexTuple itup)
{
	ScanKey		skey;
	TupleDesc	itupdesc;
	int			natts;
	int			i;

	itupdesc = RelationGetDescr(rel);
	natts = RelationGetNumberOfAttributes(rel);

	skey = (ScanKey) palloc(natts * sizeof(ScanKeyData));

	for (i = 0; i < natts; i++)
	{
		FmgrInfo   *procinfo;
		Datum		arg;
		bool		null;

		/*
		 * We can use the cached (default) support procs since no cross-type
		 * comparison can be needed.
		 */
		procinfo = index_getprocinfo(rel, i + 1, BTORDER_PROC);
		arg = index_getattr(itup, i + 1, itupdesc, &null);
		ScanKeyEntryInitializeWithInfo(&skey[i],
									   null ? SK_ISNULL : 0,
									   (AttrNumber) (i + 1),
									   InvalidStrategy,
									   InvalidOid,
									   procinfo,
									   arg);
	}

	return skey;
}

/*
 * _bt_mkscankey_nodata
 *		Build an insertion scan key that contains 3-way comparator routines
 *		appropriate to the key datatypes, but no comparison data.  The
 *		comparison data ultimately used must match the key datatypes.
 *
 *		The result cannot be used with _bt_compare(), unless comparison
 *		data is first stored into the key entries.  Currently this
 *		routine is only called by nbtsort.c and tuplesort.c, which have
 *		their own comparison routines.
 */
ScanKey
_bt_mkscankey_nodata(Relation rel)
{
	ScanKey		skey;
	int			natts;
	int			i;

	natts = RelationGetNumberOfAttributes(rel);

	skey = (ScanKey) palloc(natts * sizeof(ScanKeyData));

	for (i = 0; i < natts; i++)
	{
		FmgrInfo   *procinfo;

		/*
		 * We can use the cached (default) support procs since no cross-type
		 * comparison can be needed.
		 */
		procinfo = index_getprocinfo(rel, i + 1, BTORDER_PROC);
		ScanKeyEntryInitializeWithInfo(&skey[i],
									   SK_ISNULL,
									   (AttrNumber) (i + 1),
									   InvalidStrategy,
									   InvalidOid,
									   procinfo,
									   (Datum) 0);
	}

	return skey;
}

/*
 * free a scan key made by either _bt_mkscankey or _bt_mkscankey_nodata.
 */
void
_bt_freeskey(ScanKey skey)
{
	pfree(skey);
}

/*
 * free a retracement stack made by _bt_search.
 */
void
_bt_freestack(BTStack stack)
{
	BTStack		ostack;

	while (stack != NULL)
	{
		ostack = stack;
		stack = stack->bts_parent;
		pfree(ostack);
	}
}

/*
 * Construct a BTItem from a plain IndexTuple.
 *
 * This is now useless code, since a BTItem *is* an index tuple with
 * no extra stuff.	We hang onto it for the moment to preserve the
 * notational distinction, in case we want to add some extra stuff
 * again someday.
 */
BTItem
_bt_formitem(IndexTuple itup)
{
	int			nbytes_btitem;
	BTItem		btitem;
	Size		tuplen;

	/* make a copy of the index tuple with room for extra stuff */
	tuplen = IndexTupleSize(itup);
	nbytes_btitem = tuplen + (sizeof(BTItemData) - sizeof(IndexTupleData));

	btitem = (BTItem) palloc(nbytes_btitem);
	memcpy((char *) &(btitem->bti_itup), (char *) itup, tuplen);

	return btitem;
}

/*----------
 *	_bt_preprocess_keys() -- Preprocess scan keys
 *
 * The caller-supplied search-type keys (in scan->keyData[]) are copied to
 * so->keyData[] with possible transformation.	scan->numberOfKeys is
 * the number of input keys, so->numberOfKeys gets the number of output
 * keys (possibly less, never greater).
 *
 * The primary purpose of this routine is to discover how many scan keys
 * must be satisfied to continue the scan.	It also attempts to eliminate
 * redundant keys and detect contradictory keys.  At present, redundant and
 * contradictory keys can only be detected for same-data-type comparisons,
 * but that's the usual case so it seems worth doing.
 *
 * The output keys must be sorted by index attribute.  Presently we expect
 * (but verify) that the input keys are already so sorted --- this is done
 * by group_clauses_by_indexkey() in indxpath.c.  Some reordering of the keys
 * within each attribute may be done as a byproduct of the processing here,
 * but no other code depends on that.
 *
 * The output keys are marked with flags SK_BT_REQFWD and/or SK_BT_REQBKWD
 * if they must be satisfied in order to continue the scan forward or backward
 * respectively.  _bt_checkkeys uses these flags.  For example, if the quals
 * are "x = 1 AND y < 4 AND z < 5", then _bt_checkkeys will reject a tuple
 * (1,2,7), but we must continue the scan in case there are tuples (1,3,z).
 * But once we reach tuples like (1,4,z) we can stop scanning because no
 * later tuples could match.  This is reflected by marking the x and y keys,
 * but not the z key, with SK_BT_REQFWD.  In general, the keys for leading
 * attributes with "=" keys are marked both SK_BT_REQFWD and SK_BT_REQBKWD.
 * For the first attribute without an "=" key, any "<" and "<=" keys are
 * marked SK_BT_REQFWD while any ">" and ">=" keys are marked SK_BT_REQBKWD.
 * This can be seen to be correct by considering the above example.  Note
 * in particular that if there are no keys for a given attribute, the keys for
 * subsequent attributes can never be required; for instance "WHERE y = 4"
 * requires a full-index scan.
 *
 * If possible, redundant keys are eliminated: we keep only the tightest
 * >/>= bound and the tightest </<= bound, and if there's an = key then
 * that's the only one returned.  (So, we return either a single = key,
 * or one or two boundary-condition keys for each attr.)  However, we can
 * only detect redundant keys when the right-hand datatypes are all equal
 * to the index datatype, because we do not know suitable operators for
 * comparing right-hand values of two different datatypes.	(In theory
 * we could handle comparison of a RHS of the index datatype with a RHS of
 * another type, but that seems too much pain for too little gain.)  So,
 * keys whose operator has a nondefault subtype (ie, its RHS is not of the
 * index datatype) are ignored here, except for noting whether they include
 * an "=" condition or not.  The logic about required keys still works if
 * we don't eliminate redundant keys.
 *
 * As a byproduct of this work, we can detect contradictory quals such
 * as "x = 1 AND x > 2".  If we see that, we return so->quals_ok = FALSE,
 * indicating the scan need not be run at all since no tuples can match.
 * Again though, only keys with RHS datatype equal to the index datatype
 * can be checked for contradictions.
 *
 * Furthermore, we detect the case where the index is unique and we have
 * equality quals for all columns.	In this case there can be at most one
 * (visible) matching tuple.  index_getnext uses this to avoid uselessly
 * continuing the scan after finding one match.
 *
 * Row comparison keys are treated the same as comparisons to nondefault
 * datatypes: we just transfer them into the preprocessed array without any
 * editorialization.  We can treat them the same as an ordinary inequality
 * comparison on the row's first index column, for the purposes of the logic
 * about required keys.
 *
 * Note: the reason we have to copy the preprocessed scan keys into private
 * storage is that we are modifying the array based on comparisons of the
 * key argument values, which could change on a rescan.  Therefore we can't
 * overwrite the caller's data structure.
 *----------
 */
void
_bt_preprocess_keys(IndexScanDesc scan)
{
	Relation	relation = scan->indexRelation;
	BTScanOpaque so = (BTScanOpaque) scan->opaque;
	int			numberOfKeys = scan->numberOfKeys;
	int			new_numberOfKeys;
	int			numberOfEqualCols;
	ScanKey		inkeys;
	ScanKey		outkeys;
	ScanKey		cur;
	ScanKey		xform[BTMaxStrategyNumber];
	bool		hasOtherTypeEqual;
	Datum		test;
	int			i,
				j;
	AttrNumber	attno;

	/* initialize result variables */
	so->qual_ok = true;
	so->numberOfKeys = 0;
	scan->keys_are_unique = false;

	if (numberOfKeys < 1)
		return;					/* done if qual-less scan */

	inkeys = scan->keyData;
	outkeys = so->keyData;
	cur = &inkeys[0];
	/* we check that input keys are correctly ordered */
	if (cur->sk_attno < 1)
		elog(ERROR, "btree index keys must be ordered by attribute");

	/* We can short-circuit most of the work if there's just one key */
	if (numberOfKeys == 1)
	{
		/*
		 * We don't use indices for 'A is null' and 'A is not null' currently
		 * and 'A < = > <> NULL' will always fail - so qual is not OK if
		 * comparison value is NULL.	  - vadim 03/21/97
		 */
		if (cur->sk_flags & SK_ISNULL)
			so->qual_ok = false;
		else if (relation->rd_index->indisunique &&
				 relation->rd_rel->relnatts == 1)
		{
			/* it's a unique index, do we have an equality qual? */
			if (cur->sk_strategy == BTEqualStrategyNumber)
				scan->keys_are_unique = true;
		}
		memcpy(outkeys, inkeys, sizeof(ScanKeyData));
		so->numberOfKeys = 1;
		/* We can mark the qual as required if it's for first index col */
		if (cur->sk_attno == 1)
			_bt_mark_scankey_required(outkeys);
		return;
	}

	/*
	 * Otherwise, do the full set of pushups.
	 */
	new_numberOfKeys = 0;
	numberOfEqualCols = 0;

	/*
	 * Initialize for processing of keys for attr 1.
	 *
	 * xform[i] points to the currently best scan key of strategy type i+1, if
	 * any is found with a default operator subtype; it is NULL if we haven't
	 * yet found such a key for this attr.	Scan keys of nondefault subtypes
	 * are transferred to the output with no processing except for noting if
	 * they are of "=" type.
	 */
	attno = 1;
	memset(xform, 0, sizeof(xform));
	hasOtherTypeEqual = false;

	/*
	 * Loop iterates from 0 to numberOfKeys inclusive; we use the last pass to
	 * handle after-last-key processing.  Actual exit from the loop is at the
	 * "break" statement below.
	 */
	for (i = 0;; cur++, i++)
	{
		if (i < numberOfKeys)
		{
			/* See comments above: any NULL implies cannot match qual */
			/* Note: we assume SK_ISNULL is never set in a row header key */
			if (cur->sk_flags & SK_ISNULL)
			{
				so->qual_ok = false;

				/*
				 * Quit processing so we don't try to invoke comparison
				 * routines on NULLs.
				 */
				return;
			}
		}

		/*
		 * If we are at the end of the keys for a particular attr, finish up
		 * processing and emit the cleaned-up keys.
		 */
		if (i == numberOfKeys || cur->sk_attno != attno)
		{
			int			priorNumberOfEqualCols = numberOfEqualCols;

			/* check input keys are correctly ordered */
			if (i < numberOfKeys && cur->sk_attno < attno)
				elog(ERROR, "btree index keys must be ordered by attribute");

			/*
			 * If = has been specified, no other key will be used. In case of
			 * key > 2 && key == 1 and so on we have to set qual_ok to false
			 * before discarding the other keys.
			 */
			if (xform[BTEqualStrategyNumber - 1])
			{
				ScanKey		eq = xform[BTEqualStrategyNumber - 1];

				for (j = BTMaxStrategyNumber; --j >= 0;)
				{
					ScanKey		chk = xform[j];

					if (!chk || j == (BTEqualStrategyNumber - 1))
						continue;
					test = FunctionCall2(&chk->sk_func,
										 eq->sk_argument,
										 chk->sk_argument);
					if (!DatumGetBool(test))
					{
						so->qual_ok = false;
						break;
					}
				}
				xform[BTLessStrategyNumber - 1] = NULL;
				xform[BTLessEqualStrategyNumber - 1] = NULL;
				xform[BTGreaterEqualStrategyNumber - 1] = NULL;
				xform[BTGreaterStrategyNumber - 1] = NULL;
				/* track number of attrs for which we have "=" keys */
				numberOfEqualCols++;
			}
			else
			{
				/* track number of attrs for which we have "=" keys */
				if (hasOtherTypeEqual)
					numberOfEqualCols++;
			}

			/* keep only one of <, <= */
			if (xform[BTLessStrategyNumber - 1]
				&& xform[BTLessEqualStrategyNumber - 1])
			{
				ScanKey		lt = xform[BTLessStrategyNumber - 1];
				ScanKey		le = xform[BTLessEqualStrategyNumber - 1];

				test = FunctionCall2(&le->sk_func,
									 lt->sk_argument,
									 le->sk_argument);
				if (DatumGetBool(test))
					xform[BTLessEqualStrategyNumber - 1] = NULL;
				else
					xform[BTLessStrategyNumber - 1] = NULL;
			}

			/* keep only one of >, >= */
			if (xform[BTGreaterStrategyNumber - 1]
				&& xform[BTGreaterEqualStrategyNumber - 1])
			{
				ScanKey		gt = xform[BTGreaterStrategyNumber - 1];
				ScanKey		ge = xform[BTGreaterEqualStrategyNumber - 1];

				test = FunctionCall2(&ge->sk_func,
									 gt->sk_argument,
									 ge->sk_argument);
				if (DatumGetBool(test))
					xform[BTGreaterEqualStrategyNumber - 1] = NULL;
				else
					xform[BTGreaterStrategyNumber - 1] = NULL;
			}

			/*
			 * Emit the cleaned-up keys into the outkeys[] array, and then
			 * mark them if they are required.  They are required (possibly
			 * only in one direction) if all attrs before this one had "=".
			 */
			for (j = BTMaxStrategyNumber; --j >= 0;)
			{
				if (xform[j])
				{
					ScanKey		outkey = &outkeys[new_numberOfKeys++];

					memcpy(outkey, xform[j], sizeof(ScanKeyData));
					if (priorNumberOfEqualCols == attno - 1)
						_bt_mark_scankey_required(outkey);
				}
			}

			/*
			 * Exit loop here if done.
			 */
			if (i == numberOfKeys)
				break;

			/* Re-initialize for new attno */
			attno = cur->sk_attno;
			memset(xform, 0, sizeof(xform));
			hasOtherTypeEqual = false;
		}

		/* check strategy this key's operator corresponds to */
		j = cur->sk_strategy - 1;

		/* if row comparison or wrong RHS data type, punt */
		if ((cur->sk_flags & SK_ROW_HEADER) || cur->sk_subtype != InvalidOid)
		{
			ScanKey		outkey = &outkeys[new_numberOfKeys++];

			memcpy(outkey, cur, sizeof(ScanKeyData));
			if (numberOfEqualCols == attno - 1)
				_bt_mark_scankey_required(outkey);
			if (j == (BTEqualStrategyNumber - 1))
				hasOtherTypeEqual = true;
			continue;
		}

		/* have we seen one of these before? */
		if (xform[j])
		{
			/* yup, keep the more restrictive key */
			test = FunctionCall2(&cur->sk_func,
								 cur->sk_argument,
								 xform[j]->sk_argument);
			if (DatumGetBool(test))
				xform[j] = cur;
			else if (j == (BTEqualStrategyNumber - 1))
			{
				/* key == a && key == b, but a != b */
				so->qual_ok = false;
				return;
			}
		}
		else
		{
			/* nope, so remember this scankey */
			xform[j] = cur;
		}
	}

	so->numberOfKeys = new_numberOfKeys;

	/*
	 * If unique index and we have equality keys for all columns, set
	 * keys_are_unique flag for higher levels.
	 */
	if (relation->rd_index->indisunique &&
		relation->rd_rel->relnatts == numberOfEqualCols)
		scan->keys_are_unique = true;
}

/*
 * Mark a scankey as "required to continue the scan".
 *
 * Depending on the operator type, the key may be required for both scan
 * directions or just one.  Also, if the key is a row comparison header,
 * we have to mark the appropriate subsidiary ScanKeys as required.  In
 * such cases, the first subsidiary key is required, but subsequent ones
 * are required only as long as they correspond to successive index columns.
 * Otherwise the row comparison ordering is different from the index ordering
 * and so we can't stop the scan on the basis of those lower-order columns.
 *
 * Note: when we set required-key flag bits in a subsidiary scankey, we are
 * scribbling on a data structure belonging to the index AM's caller, not on
 * our private copy.  This should be OK because the marking will not change
 * from scan to scan within a query, and so we'd just re-mark the same way
 * anyway on a rescan.  Something to keep an eye on though.
 */
static void
_bt_mark_scankey_required(ScanKey skey)
{
	int		addflags;

	switch (skey->sk_strategy)
	{
		case BTLessStrategyNumber:
		case BTLessEqualStrategyNumber:
			addflags = SK_BT_REQFWD;
			break;
		case BTEqualStrategyNumber:
			addflags = SK_BT_REQFWD | SK_BT_REQBKWD;
			break;
		case BTGreaterEqualStrategyNumber:
		case BTGreaterStrategyNumber:
			addflags = SK_BT_REQBKWD;
			break;
		default:
			elog(ERROR, "unrecognized StrategyNumber: %d",
				 (int) skey->sk_strategy);
			addflags = 0;		/* keep compiler quiet */
			break;
	}

	skey->sk_flags |= addflags;

	if (skey->sk_flags & SK_ROW_HEADER)
	{
		ScanKey subkey = (ScanKey) DatumGetPointer(skey->sk_argument);
		AttrNumber attno = skey->sk_attno;

		/* First subkey should be same as the header says */
		Assert(subkey->sk_attno == attno);

		for (;;)
		{
			Assert(subkey->sk_flags & SK_ROW_MEMBER);
			Assert(subkey->sk_strategy == skey->sk_strategy);
			if (subkey->sk_attno != attno)
				break;			/* non-adjacent key, so not required */
			subkey->sk_flags |= addflags;
			if (subkey->sk_flags & SK_ROW_END)
				break;
			subkey++;
			attno++;
		}
	}
}

/*
 * Test whether an indextuple satisfies all the scankey conditions.
 *
 * If so, copy its TID into scan->xs_ctup.t_self, and return TRUE.
 * If not, return FALSE (xs_ctup is not changed).
 *
 * If the tuple fails to pass the qual, we also determine whether there's
 * any need to continue the scan beyond this tuple, and set *continuescan
 * accordingly.  See comments for _bt_preprocess_keys(), above, about how
 * this is done.
 *
 * scan: index scan descriptor (containing a search-type scankey)
 * page: buffer page containing index tuple
 * offnum: offset number of index tuple (must be a valid item!)
 * dir: direction we are scanning in
 * continuescan: output parameter (will be set correctly in all cases)
 */
bool
_bt_checkkeys(IndexScanDesc scan,
			  Page page, OffsetNumber offnum,
			  ScanDirection dir, bool *continuescan)
{
	ItemId		iid = PageGetItemId(page, offnum);
	bool		tuple_valid;
	BTItem		btitem;
	IndexTuple	tuple;
	TupleDesc	tupdesc;
	BTScanOpaque so;
	int			keysz;
	int			ikey;
	ScanKey		key;

	*continuescan = true;		/* default assumption */

	/*
	 * If the scan specifies not to return killed tuples, then we treat
	 * a killed tuple as not passing the qual.  Most of the time, it's a
	 * win to not bother examining the tuple's index keys, but just return
	 * immediately with continuescan = true to proceed to the next tuple.
	 * However, if this is the last tuple on the page, we should check
	 * the index keys to prevent uselessly advancing to the next page.
	 */
	if (scan->ignore_killed_tuples && ItemIdDeleted(iid))
	{
		/* return immediately if there are more tuples on the page */
		if (ScanDirectionIsForward(dir))
		{
			if (offnum < PageGetMaxOffsetNumber(page))
				return false;
		}
		else
		{
			BTPageOpaque opaque = (BTPageOpaque) PageGetSpecialPointer(page);

			if (offnum > P_FIRSTDATAKEY(opaque))
				return false;
		}
		/*
		 * OK, we want to check the keys, but we'll return FALSE even
		 * if the tuple passes the key tests.
		 */
		tuple_valid = false;
	}
	else
		tuple_valid = true;

	btitem = (BTItem) PageGetItem(page, iid);
	tuple = &btitem->bti_itup;

	IncrIndexProcessed();

	tupdesc = RelationGetDescr(scan->indexRelation);
	so = (BTScanOpaque) scan->opaque;
	keysz = so->numberOfKeys;

	for (key = so->keyData, ikey = 0; ikey < keysz; key++, ikey++)
	{
		Datum		datum;
		bool		isNull;
		Datum		test;

		/* row-comparison keys need special processing */
		if (key->sk_flags & SK_ROW_HEADER)
		{
			if (_bt_check_rowcompare(key, tuple, tupdesc, dir, continuescan))
				continue;
			return false;
		}

		datum = index_getattr(tuple,
							  key->sk_attno,
							  tupdesc,
							  &isNull);

		/* btree doesn't support 'A is null' clauses, yet */
		if (key->sk_flags & SK_ISNULL)
		{
			/* we shouldn't get here, really; see _bt_preprocess_keys() */
			*continuescan = false;
			return false;
		}

		if (isNull)
		{
			/*
			 * Since NULLs are sorted after non-NULLs, we know we have reached
			 * the upper limit of the range of values for this index attr.	On
			 * a forward scan, we can stop if this qual is one of the "must
			 * match" subset.  On a backward scan, however, we should keep
			 * going.
			 */
			if ((key->sk_flags & SK_BT_REQFWD) && ScanDirectionIsForward(dir))
				*continuescan = false;

			/*
			 * In any case, this indextuple doesn't match the qual.
			 */
			return false;
		}

		test = FunctionCall2(&key->sk_func, datum, key->sk_argument);

		if (!DatumGetBool(test))
		{
			/*
			 * Tuple fails this qual.  If it's a required qual for the current
			 * scan direction, then we can conclude no further tuples will
			 * pass, either.
			 *
			 * Note: because we stop the scan as soon as any required equality
			 * qual fails, it is critical that equality quals be used for the
			 * initial positioning in _bt_first() when they are available. See
			 * comments in _bt_first().
			 */
			if ((key->sk_flags & SK_BT_REQFWD) &&
				ScanDirectionIsForward(dir))
				*continuescan = false;
			else if ((key->sk_flags & SK_BT_REQBKWD) &&
					 ScanDirectionIsBackward(dir))
				*continuescan = false;

			/*
			 * In any case, this indextuple doesn't match the qual.
			 */
			return false;
		}
	}

	/* If we get here, the tuple passes all index quals. */
	if (tuple_valid)
		scan->xs_ctup.t_self = tuple->t_tid;

	return tuple_valid;
}

/*
 * Test whether an indextuple satisfies a row-comparison scan condition.
 *
 * Return true if so, false if not.  If not, also clear *continuescan if
 * it's not possible for any future tuples in the current scan direction
 * to pass the qual.
 *
 * This is a subroutine for _bt_checkkeys, which see for more info.
 */
static bool
_bt_check_rowcompare(ScanKey skey, IndexTuple tuple, TupleDesc tupdesc,
					 ScanDirection dir, bool *continuescan)
{
	ScanKey		subkey = (ScanKey) DatumGetPointer(skey->sk_argument);
	int32		cmpresult = 0;
	bool		result;

	/* First subkey should be same as the header says */
	Assert(subkey->sk_attno == skey->sk_attno);

	/* Loop over columns of the row condition */
	for (;;)
	{
		Datum		datum;
		bool		isNull;

		Assert(subkey->sk_flags & SK_ROW_MEMBER);
		Assert(subkey->sk_strategy == skey->sk_strategy);

		datum = index_getattr(tuple,
							  subkey->sk_attno,
							  tupdesc,
							  &isNull);

		if (isNull)
		{
			/*
			 * Since NULLs are sorted after non-NULLs, we know we have reached
			 * the upper limit of the range of values for this index attr.	On
			 * a forward scan, we can stop if this qual is one of the "must
			 * match" subset.  On a backward scan, however, we should keep
			 * going.
			 */
			if ((subkey->sk_flags & SK_BT_REQFWD) &&
				ScanDirectionIsForward(dir))
				*continuescan = false;

			/*
			 * In any case, this indextuple doesn't match the qual.
			 */
			return false;
		}

		if (subkey->sk_flags & SK_ISNULL)
		{
			/*
			 * Unlike the simple-scankey case, this isn't a disallowed case.
			 * But it can never match.  If all the earlier row comparison
			 * columns are required for the scan direction, we can stop
			 * the scan, because there can't be another tuple that will
			 * succeed.
			 */
			if (subkey != (ScanKey) DatumGetPointer(skey->sk_argument))
				subkey--;
			if ((subkey->sk_flags & SK_BT_REQFWD) &&
				ScanDirectionIsForward(dir))
				*continuescan = false;
			else if ((subkey->sk_flags & SK_BT_REQBKWD) &&
					 ScanDirectionIsBackward(dir))
				*continuescan = false;
			return false;
		}

		/* Perform the test --- three-way comparison not bool operator */
		cmpresult = DatumGetInt32(FunctionCall2(&subkey->sk_func,
												datum,
												subkey->sk_argument));

		/* Done comparing if unequal, else advance to next column */
		if (cmpresult != 0)
			break;

		if (subkey->sk_flags & SK_ROW_END)
			break;
		subkey++;
	}

	/*
	 * At this point cmpresult indicates the overall result of the row
	 * comparison, and subkey points to the deciding column (or the last
	 * column if the result is "=").
	 */
	switch (subkey->sk_strategy)
	{
		/* EQ and NE cases aren't allowed here */
		case BTLessStrategyNumber:
			result = (cmpresult < 0);
			break;
		case BTLessEqualStrategyNumber:
			result = (cmpresult <= 0);
			break;
		case BTGreaterEqualStrategyNumber:
			result = (cmpresult >= 0);
			break;
		case BTGreaterStrategyNumber:
			result = (cmpresult > 0);
			break;
		default:
			elog(ERROR, "unrecognized RowCompareType: %d",
				 (int) subkey->sk_strategy);
			result = 0;			/* keep compiler quiet */
			break;
	}

	if (!result)
	{
		/*
		 * Tuple fails this qual.  If it's a required qual for the current
		 * scan direction, then we can conclude no further tuples will
		 * pass, either.  Note we have to look at the deciding column, not
		 * necessarily the first or last column of the row condition.
		 */
		if ((subkey->sk_flags & SK_BT_REQFWD) &&
			ScanDirectionIsForward(dir))
			*continuescan = false;
		else if ((subkey->sk_flags & SK_BT_REQBKWD) &&
				 ScanDirectionIsBackward(dir))
			*continuescan = false;
	}

	return result;
}
