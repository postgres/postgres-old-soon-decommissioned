/*-------------------------------------------------------------------------
 *
 * utility.h
 *	  prototypes for utility.c.
 *
 *
 * Portions Copyright (c) 1996-2001, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef UTILITY_H
#define UTILITY_H

#include "executor/execdesc.h"

extern void ProcessUtility(Node *parsetree, CommandDest dest);

#endif	 /* UTILITY_H */
