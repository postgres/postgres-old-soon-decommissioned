/*-------------------------------------------------------------------------
 *
 * purge.h--
 *    
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef	PURGE_H
#define	PURGE_H

extern int32 RelationPurge(char *relationName,
			   char *absoluteTimeString,
			   char *relativeTimeString);

#endif	/* PURGE_H */
