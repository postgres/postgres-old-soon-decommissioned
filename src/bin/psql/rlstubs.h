/*-------------------------------------------------------------------------
 *
 * rlstubs.h
 *    stub routines when compiled without readline and history libraries
 *
 * Copyright (c) 1994-5, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *    $Header$
 *
 *-------------------------------------------------------------------------
 */
extern char *readline(const char *prompt);
extern int write_history(const char *dum);
extern int using_history(void);
extern int add_history(const char *dum);
