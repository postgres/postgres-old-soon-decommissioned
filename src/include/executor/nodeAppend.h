/*-------------------------------------------------------------------------
 *
 * nodeAppend.h--
 *
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEAPPEND_H
#define NODEAPPEND_H

extern bool ExecInitAppend(Append * node, EState * estate, Plan * parent);
extern int	ExecCountSlotsAppend(Append * node);
extern TupleTableSlot *ExecProcAppend(Append * node);
extern void ExecEndAppend(Append * node);

#endif							/* NODEAPPEND_H */
