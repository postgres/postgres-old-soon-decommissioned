/*-------------------------------------------------------------------------
 *
 * rtscan.h
 *	  routines defined in access/rtree/rtscan.c
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef RTSCAN_H
#define RTSCAN_H

#include "storage/block.h"
#include "storage/off.h"
#include "utils/rel.h"

void		rtadjscans(Relation r, int op, BlockNumber blkno, OffsetNumber offnum);

#endif	 /* RTSCAN_H */
