/*-------------------------------------------------------------------------
 *
 * printtup.h--
 *
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef PRINTTUP_H
#define PRINTTUP_H

#include <access/htup.h>
#include <access/tupdesc.h>

extern int	getTypeOutAndElem(Oid type, Oid* typOutput, Oid* typElem);
extern void printtup(HeapTuple tuple, TupleDesc typeinfo);
extern void showatts(char *name, TupleDesc attinfo);
extern void debugtup(HeapTuple tuple, TupleDesc typeinfo);
extern void printtup_internal(HeapTuple tuple, TupleDesc typeinfo);

#endif	 /* PRINTTUP_H */
