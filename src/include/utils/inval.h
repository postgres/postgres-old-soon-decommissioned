/*-------------------------------------------------------------------------
 *
 * inval.h
 *	  POSTGRES cache invalidation dispatcher definitions.
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef INVAL_H
#define INVAL_H

#include "access/htup.h"

extern void DiscardInvalid(void);

extern void RegisterInvalid(bool send);

extern void RelationInvalidateHeapTuple(Relation relation, HeapTuple tuple);

#endif	 /* INVAL_H */
