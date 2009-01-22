
/*-------------------------------------------------------------------------
 *
 * viewUpdate.h
 *
 * Portions Copyright (c) 1996-2006, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */
#ifndef VIEW_UPDATE_H
#define VIEW_UPDATE_H

#include "nodes/parsenodes.h"

extern void
CreateViewUpdateRules(Oid viewOid, const Query *viewDef);

#endif /* VIEW_UPDATE_H */
