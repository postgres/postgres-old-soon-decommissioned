/*-------------------------------------------------------------------------
 *
 * nodeMergejoin.h--
 *    
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef	NODEMERGEJOIN_H
#define	NODEMERGEJOIN_H

extern bool MergeCompare(List *eqQual, List *compareQual, ExprContext *econtext);

extern void ExecMergeTupleDumpInner(ExprContext *econtext);

extern void ExecMergeTupleDumpOuter(ExprContext *econtext);

extern void ExecMergeTupleDumpMarked(ExprContext *econtext,
				     MergeJoinState *mergestate);

extern void ExecMergeTupleDump(ExprContext *econtext,
			       MergeJoinState *mergestate);

extern TupleTableSlot *ExecMergeJoin(MergeJoin *node);

extern bool ExecInitMergeJoin(MergeJoin *node, EState *estate, Plan *parent);

extern int ExecCountSlotsMergeJoin(MergeJoin *node);

extern void ExecEndMergeJoin(MergeJoin *node);

#endif	/* NODEMERGEJOIN_H; */
