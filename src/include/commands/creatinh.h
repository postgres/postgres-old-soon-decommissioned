/*-------------------------------------------------------------------------
 *
 * creatinh.h
 *	  prototypes for creatinh.c.
 *
 *
 * Portions Copyright (c) 1996-2001, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef CREATINH_H
#define CREATINH_H

#include "nodes/parsenodes.h"

extern Oid	DefineRelation(CreateStmt *stmt, char relkind);
extern void RemoveRelation(const RangeVar *relation);
extern void TruncateRelation(const RangeVar *relation);

#endif   /* CREATINH_H */
