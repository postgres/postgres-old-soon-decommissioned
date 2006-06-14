/*
 * psql - the PostgreSQL interactive terminal
 *
 * Copyright (c) 2000-2006, PostgreSQL Global Development Group
 *
 * $PostgreSQL$
 */
#ifndef MAINLOOP_H
#define MAINLOOP_H

#include "postgres_fe.h"
#include <stdio.h>

int			MainLoop(FILE *source);

#endif   /* MAINLOOP_H */
