/*-------------------------------------------------------------------------
 *
 * rtstrat.h--
 *    routines defined in access/rtree/rtstrat.c
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef RTSTRAT_H

extern RegProcedure RTMapOperator(Relation r,  AttrNumber attnum,
				  RegProcedure proc);

#endif /* RTSTRAT_H */
