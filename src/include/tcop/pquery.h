/*-------------------------------------------------------------------------
 *
 * pquery.h
 *	  prototypes for pquery.c.
 *
 *
 * Portions Copyright (c) 1996-2002, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef PQUERY_H
#define PQUERY_H

#include "utils/portal.h"


extern void ProcessQuery(Query *parsetree,
						 Plan *plan,
						 ParamListInfo params,
						 const char *portalName,
						 CommandDest dest,
						 char *completionTag);

extern void PortalStart(Portal portal, ParamListInfo params);

extern bool PortalRun(Portal portal, long count,
					  CommandDest dest, CommandDest altdest,
					  char *completionTag);

extern long PortalRunFetch(Portal portal,
						   FetchDirection fdirection,
						   long count,
						   CommandDest dest);

#endif   /* PQUERY_H */
