/*-------------------------------------------------------------------------
 *
 * dbcommands.h--
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

/*
 * Originally from tmp/daemon.h. The functions declared in daemon.h does not
 * exist; hence removed.		-- AY 7/29/94
 */
#define SIGKILLDAEMON1	SIGINT
#define SIGKILLDAEMON2	SIGTERM

extern void		createdb(char *dbname);
extern void		destroydb(char *dbname);

#endif							/* DBCOMMANDS_H */
