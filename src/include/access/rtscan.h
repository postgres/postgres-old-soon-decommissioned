/*-------------------------------------------------------------------------
 *
 * rtscan.h
 *	  routines defined in access/rtree/rtscan.c
 *
 *
 * Portions Copyright (c) 1996-2004, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */
#ifndef RTSCAN_H
#define RTSCAN_H

#include "storage/block.h"
#include "storage/off.h"
#include "utils/rel.h"

void		rtadjscans(Relation r, int op, BlockNumber blkno, OffsetNumber offnum);

#endif   /* RTSCAN_H */
