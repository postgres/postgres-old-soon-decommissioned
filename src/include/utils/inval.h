/*-------------------------------------------------------------------------
 *
 * inval.h
 *	  POSTGRES cache invalidation dispatcher definitions.
 *
 *
 * Portions Copyright (c) 1996-2001, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
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

extern void ImmediateLocalInvalidation(bool send);

extern void RelationInvalidateHeapTuple(Relation relation, HeapTuple tuple);

extern void RelationMark4RollbackHeapTuple(Relation relation, HeapTuple tuple);

#endif	 /* INVAL_H */
