/*-------------------------------------------------------------------------
 *
 * nodeSubqueryscan.h
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
#ifndef NODESUBQUERYSCAN_H
#define NODESUBQUERYSCAN_H

#include "nodes/execnodes.h"

extern SubqueryScanState *ExecInitSubqueryScan(SubqueryScan *node, EState *estate, int eflags);
extern TupleTableSlot *ExecSubqueryScan(SubqueryScanState *node);
extern void ExecEndSubqueryScan(SubqueryScanState *node);
extern void ExecSubqueryReScan(SubqueryScanState *node, ExprContext *exprCtxt);

#endif   /* NODESUBQUERYSCAN_H */
