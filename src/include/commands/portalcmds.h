/*-------------------------------------------------------------------------
 *
 * portalcmds.h
 *	  prototypes for portalcmds.c.
 *
 *
 * Portions Copyright (c) 1996-2002, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef PORTALCMDS_H
#define PORTALCMDS_H

#include "utils/portal.h"


extern void PerformCursorOpen(DeclareCursorStmt *stmt, CommandDest dest);

extern void PerformPortalFetch(FetchStmt *stmt, CommandDest dest,
							   char *completionTag);

extern void PerformPortalClose(char *name);

extern void PortalCleanup(Portal portal, bool isError);

extern void PersistHoldablePortal(Portal portal);

#endif   /* PORTALCMDS_H */
