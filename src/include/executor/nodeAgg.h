/*-------------------------------------------------------------------------
 *
 * nodeAgg.h--
 *
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEAGG_H
#define NODEAGG_H

extern TupleTableSlot *ExecAgg(Agg * node);
extern bool		ExecInitAgg(Agg * node, EState * estate, Plan * parent);
extern int		ExecCountSlotsAgg(Agg * node);
extern void		ExecEndAgg(Agg * node);

#endif							/* NODEAGG_H */
