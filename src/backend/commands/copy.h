/*-------------------------------------------------------------------------
 *
 * copy.h--
 *    Definitions for using the POSTGRES copy command.
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef COPY_H
#define	COPY_H

#include "postgres.h"

void DoCopy(char *relname, bool binary, bool from, bool pipe, char *filename,
	    char *delim);

#endif	/* COPY_H */
