/*-------------------------------------------------------------------------
 *
 * schemacmds.h
 *	  prototypes for schemacmds.c.
 *
 *
 * Portions Copyright (c) 1996-2003, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */

#ifndef SCHEMACMDS_H
#define SCHEMACMDS_H

#include "nodes/parsenodes.h"

extern void CreateSchemaCommand(CreateSchemaStmt *parsetree);

extern void RemoveSchema(List *names, DropBehavior behavior);
extern void RemoveSchemaById(Oid schemaOid);

extern void RenameSchema(const char *oldname, const char *newname);

#endif   /* SCHEMACMDS_H */
