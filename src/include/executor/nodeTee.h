/*-------------------------------------------------------------------------
 *
 * nodeTee.h--
 *	  support functions for a Tee executor node
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */

#ifndef NODETEE_H
#define NODETEE_H

extern TupleTableSlot *ExecTee(Tee * node, Plan * parent);
extern bool ExecInitTee(Tee * node, EState * estate, Plan * parent);
extern void ExecTeeReScan(Tee * node, ExprContext * exprCtxt, Plan * parent);
extern void ExecEndTee(Tee * node, Plan * parent);
extern int	ExecCountSlotsTee(Tee * node);

#endif							/* NODETEE_H */
