/*
 * psql - the PostgreSQL interactive terminal
 *
 * Copyright 2000 by PostgreSQL Global Development Group
 *
 * $Header$
 */
#ifndef COPY_H
#define COPY_H

#include <c.h>
#include <stdio.h>
#include <libpq-fe.h>

/* handler for \copy */
bool		do_copy(const char *args);

/* lower level processors for copy in/out streams */

bool		handleCopyOut(PGconn *conn, FILE *copystream);
bool		handleCopyIn(PGconn *conn, FILE *copystream, const char *prompt);

#endif
