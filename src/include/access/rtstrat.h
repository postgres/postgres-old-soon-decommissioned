/*-------------------------------------------------------------------------
 *
 * rtstrat.h
 *	  routines defined in access/rtree/rtstrat.c
 *
 *
 * Portions Copyright (c) 1996-2001, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef RTSTRAT_H
#define RTSTRAT_H

#include "utils/rel.h"

extern RegProcedure RTMapOperator(Relation r, AttrNumber attnum,
			  RegProcedure proc);

#endif	 /* RTSTRAT_H */
