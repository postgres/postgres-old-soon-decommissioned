/*-------------------------------------------------------------------------
 *
 * nodeMaterial.h
 *
 *
 *
 * Portions Copyright (c) 1996-2001, PostgreSQL Global Development Group
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
extern void ExecMaterialMarkPos(Material *node);
extern void ExecMaterialRestrPos(Material *node);
extern void ExecMaterialReScan(Material *node, ExprContext *exprCtxt, Plan *parent);

#endif	 /* NODEMATERIAL_H */
