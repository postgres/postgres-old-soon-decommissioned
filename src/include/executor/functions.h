/*-------------------------------------------------------------------------
 *
 * functions.h
 *
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "nodes/parsenodes.h"
#include "utils/syscache.h"

extern Datum ProjectAttribute(TupleDesc TD, TargetEntry *tlist,
				 HeapTuple tup, bool *isnullP);

extern Datum postquel_function(Func *funcNode, char **args,
				  bool *isNull, bool *isDone);

#endif	 /* FUNCTIONS_H */
