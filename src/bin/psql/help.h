/*
 * psql - the PostgreSQL interactive terminal
 *
 * Copyright 2000 by PostgreSQL Global Development Group
 *
 * $Header$
 */
#ifndef HELP_H
#define HELP_H

void		usage(void);

void		slashUsage(bool pager);

void		helpSQL(const char *topic, bool pager);

void		print_copyright(void);

#endif
