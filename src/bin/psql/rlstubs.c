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

char *
readline(char *prompt)
{
    static char buf[500];

    printf("%s");
    return fgets(buf, 500, stdin);
}

int
write_history()
{
    return 0;
}

int
using_history()
{
    return 0;
}

int
add_history()
{
    return 0;
}
