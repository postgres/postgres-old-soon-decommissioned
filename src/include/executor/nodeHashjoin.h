/*-------------------------------------------------------------------------
 *
 * nodeHashjoin.h--
 *
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEHASHJOIN_H
#define NODEHASHJOIN_H

extern TupleTableSlot *ExecHashJoin(HashJoin * node);

extern bool		ExecInitHashJoin(HashJoin * node, EState * estate, Plan * parent);

extern int		ExecCountSlotsHashJoin(HashJoin * node);

extern void		ExecEndHashJoin(HashJoin * node);

extern char    *
ExecHashJoinSaveTuple(HeapTuple heapTuple, char *buffer,
					  File file, char *position);


#endif							/* NODEHASHJOIN_H */
