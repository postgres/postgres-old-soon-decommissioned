/*-------------------------------------------------------------------------
 *
 * iqual.h--
 *    Index scan key qualification definitions.
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef	IQUAL_H
#define IQUAL_H

#include "c.h"

#include "storage/itemid.h"
#include "utils/rel.h"
#include "access/skey.h"
#include "access/itup.h"

/* ----------------
 *	index tuple qualification support
 * ----------------
 */

extern int NIndexTupleProcessed;

extern bool index_keytest(IndexTuple tuple, TupleDesc tupdesc,
			  int scanKeySize, ScanKey key);

#endif	/* IQUAL_H */
