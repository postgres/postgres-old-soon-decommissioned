/*-------------------------------------------------------------------------
 *
 * rlstubs.c--
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
#include <stdio.h>

#include "rlstubs.h"

extern char *readline(const char *);
extern int write_history(const char *);
extern int using_history(void);
extern int add_history(const char *);

char *
readline(const char *prompt)
{
    static char buf[500];

    printf("%s", prompt);
    return fgets(buf, 500, stdin);
}

int
write_history(char *dum)
{
    return 0;
}

int
using_history(void)
{
    return 0;
}

int
add_history(char *dum)
{
    return 0;
}
