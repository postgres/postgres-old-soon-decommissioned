/*-------------------------------------------------------------------------
 *
 * dbcommands.h
 *
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef DBCOMMANDS_H
#define DBCOMMANDS_H

extern void createdb(const char *dbname, const char *dbpath, int encoding);
extern void dropdb(const char *dbname);

#endif	 /* DBCOMMANDS_H */
