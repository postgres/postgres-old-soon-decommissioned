/*-------------------------------------------------------------------------
 *
 * copy.h
 *	  Definitions for using the POSTGRES copy command.
 *
 *
 * Portions Copyright (c) 1996-2001, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef COPY_H
#define COPY_H

#include "nodes/primnodes.h"

extern int	copy_lineno;

void DoCopy(const RangeVar *relation, bool binary, bool oids,
			bool from, bool pipe,
			char *filename, char *delim, char *null_print);

#endif   /* COPY_H */
