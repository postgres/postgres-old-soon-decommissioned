/*-------------------------------------------------------------------------
 *
 * copy.h
 *	  Definitions for using the POSTGRES copy command.
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef COPY_H
#define COPY_H


void DoCopy(char *relname, bool binary, bool oids, bool from, bool pipe,
			char *filename, char *delim, int fileumask);

#endif	 /* COPY_H */
