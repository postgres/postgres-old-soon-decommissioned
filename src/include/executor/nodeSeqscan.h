/*-------------------------------------------------------------------------
 *
 * nodeSeqscan.h
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
#ifndef NODESEQSCAN_H
#define NODESEQSCAN_H

#include "nodes/plannodes.h"

extern TupleTableSlot *ExecSeqScan(SeqScan *node);
extern bool ExecInitSeqScan(SeqScan *node, EState *estate, Plan *parent);
extern int	ExecCountSlotsSeqScan(SeqScan *node);
extern void ExecEndSeqScan(SeqScan *node);
extern void ExecSeqReScan(SeqScan *node, ExprContext *exprCtxt, Plan *parent);
extern void ExecSeqMarkPos(SeqScan *node);
extern void ExecSeqRestrPos(SeqScan *node);

#endif	 /* NODESEQSCAN_H */
