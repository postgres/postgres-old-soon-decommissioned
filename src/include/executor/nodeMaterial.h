/*-------------------------------------------------------------------------
 *
 * nodeMaterial.h
 *
 *
 *
 * Portions Copyright (c) 1996-2000, PostgreSQL, Inc
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEMATERIAL_H
#define NODEMATERIAL_H

#include "nodes/plannodes.h"

extern TupleTableSlot *ExecMaterial(Material *node);
extern bool ExecInitMaterial(Material *node, EState *estate, Plan *parent);
extern int	ExecCountSlotsMaterial(Material *node);
extern void ExecEndMaterial(Material *node);
extern void ExecMaterialReScan(Material *node, ExprContext *exprCtxt, Plan *parent);

#ifdef NOT_USED
extern List ExecMaterialMarkPos(Material *node);
extern void ExecMaterialRestrPos(Material *node);

#endif
#endif	 /* NODEMATERIAL_H */
