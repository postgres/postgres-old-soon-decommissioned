/*-------------------------------------------------------------------------
 *
 * explain.h
 *	  prototypes for explain.c
 *
 * Copyright (c) 1994-5, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef EXPLAIN_H
#define EXPLAIN_H

#include "nodes/parsenodes.h"
#include "tcop/dest.h"

extern void ExplainQuery(Query *query, bool verbose, CommandDest dest);

#endif	 /* EXPLAIN_H */
