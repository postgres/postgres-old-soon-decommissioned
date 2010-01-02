/*-------------------------------------------------------------------------
 *
 * nodeGroup.h
 *	  prototypes for nodeGroup.c
 *
 *
 * Portions Copyright (c) 1996-2010, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEGROUP_H
#define NODEGROUP_H

#include "nodes/execnodes.h"

extern GroupState *ExecInitGroup(Group *node, EState *estate, int eflags);
extern TupleTableSlot *ExecGroup(GroupState *node);
extern void ExecEndGroup(GroupState *node);
extern void ExecReScanGroup(GroupState *node, ExprContext *exprCtxt);

#endif   /* NODEGROUP_H */
