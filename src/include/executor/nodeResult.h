/*-------------------------------------------------------------------------
 *
 * nodeResult.h
 *
 *
 *
 * Portions Copyright (c) 1996-2004, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODERESULT_H
#define NODERESULT_H

#include "nodes/execnodes.h"

extern int	ExecCountSlotsResult(Result *node);
extern ResultState *ExecInitResult(Result *node, EState *estate);
extern TupleTableSlot *ExecResult(ResultState *node);
extern void ExecEndResult(ResultState *node);
extern void ExecReScanResult(ResultState *node, ExprContext *exprCtxt);

#endif   /* NODERESULT_H */
