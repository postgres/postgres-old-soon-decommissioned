/*-------------------------------------------------------------------------
 *
 * visibilitymap.h
 *      visibility map interface
 *
 *
 * Portions Copyright (c) 2007, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */
#ifndef VISIBILITYMAP_H
#define VISIBILITYMAP_H

#include "utils/rel.h"
#include "storage/buf.h"
#include "storage/itemptr.h"
#include "access/xlogdefs.h"

extern void visibilitymap_clear(Relation rel, BlockNumber heapBlk);
extern void visibilitymap_pin(Relation rel, BlockNumber heapBlk,
							  Buffer *vmbuf);
extern void visibilitymap_set(Relation rel, BlockNumber heapBlk,
							  XLogRecPtr recptr, Buffer *vmbuf);
extern bool visibilitymap_test(Relation rel, BlockNumber heapBlk, Buffer *vmbuf);
extern void visibilitymap_truncate(Relation rel, BlockNumber heapblk);

#endif   /* VISIBILITYMAP_H */
