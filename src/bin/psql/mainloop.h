/*
 * psql - the PostgreSQL interactive terminal
 *
 * Copyright (c) 2000-2010, PostgreSQL Global Development Group
 *
 * $PostgreSQL$
 */
#ifndef MAINLOOP_H
#define MAINLOOP_H

#include "postgres_fe.h"

int			MainLoop(FILE *source);

#endif   /* MAINLOOP_H */
