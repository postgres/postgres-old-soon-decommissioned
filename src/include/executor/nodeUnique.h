/*-------------------------------------------------------------------------
 *
 * nodeUnique.h
 *
 *
 *
 * Portions Copyright (c) 1996-2010, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEUNIQUE_H
#define NODEUNIQUE_H

#include "nodes/execnodes.h"

extern UniqueState *ExecInitUnique(Unique *node, EState *estate, int eflags);
extern TupleTableSlot *ExecUnique(UniqueState *node);
extern void ExecEndUnique(UniqueState *node);
extern void ExecReScanUnique(UniqueState *node, ExprContext *exprCtxt);

#endif   /* NODEUNIQUE_H */
