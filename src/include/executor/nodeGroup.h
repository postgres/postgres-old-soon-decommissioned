/*-------------------------------------------------------------------------
 *
 * nodeGroup.h--
 *	  prototypes for nodeGroup.c
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEGROUP_H
#define NODEGROUP_H

extern TupleTableSlot *ExecGroup(Group *node);
extern bool ExecInitGroup(Group *node, EState *estate, Plan *parent);
extern int	ExecCountSlotsGroup(Group *node);
extern void ExecEndGroup(Group *node);

#endif							/* NODEGROUP_H */
