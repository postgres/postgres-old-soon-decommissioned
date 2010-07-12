/*-------------------------------------------------------------------------
 *
 * nodeBitmapHeapscan.h
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
#ifndef NODEBITMAPHEAPSCAN_H
#define NODEBITMAPHEAPSCAN_H

#include "nodes/execnodes.h"

extern BitmapHeapScanState *ExecInitBitmapHeapScan(BitmapHeapScan *node, EState *estate, int eflags);
extern TupleTableSlot *ExecBitmapHeapScan(BitmapHeapScanState *node);
extern void ExecEndBitmapHeapScan(BitmapHeapScanState *node);
extern void ExecReScanBitmapHeapScan(BitmapHeapScanState *node);

#endif   /* NODEBITMAPHEAPSCAN_H */
