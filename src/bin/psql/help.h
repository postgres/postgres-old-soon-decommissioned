/*
 * psql - the PostgreSQL interactive terminal
 *
 * Copyright 2000 by PostgreSQL Global Development Group
 *
 * $Header$
 */
#ifndef HELP_H
#define HELP_H

#include <c.h>

void		usage(void);

void		slashUsage(void);

void		helpSQL(const char *topic);

void		print_copyright(void);

#endif
