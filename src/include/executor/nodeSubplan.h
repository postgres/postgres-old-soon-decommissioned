/*-------------------------------------------------------------------------
 *
 * nodeSubplan.h
 *
 *
 *
 * Portions Copyright (c) 1996-2002, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODESUBPLAN_H
#define NODESUBPLAN_H

#include "nodes/execnodes.h"

extern void ExecInitSubPlan(SubPlanExprState *sstate, EState *estate);
extern Datum ExecSubPlan(SubPlanExprState *node,
						 ExprContext *econtext,
						 bool *isNull);
extern void ExecEndSubPlan(SubPlanExprState *node);
extern void ExecReScanSetParamPlan(SubPlanExprState *node, PlanState *parent);

extern void ExecSetParamPlan(SubPlanExprState *node, ExprContext *econtext);

#endif   /* NODESUBPLAN_H */
