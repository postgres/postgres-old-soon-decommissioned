/*-------------------------------------------------------------------------
 *
 * strdup.c--
 *    copies a null-terminated string.
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *    $Header$
 *
 *-------------------------------------------------------------------------
 */
#include <string.h>

char *
strdup(char *string)
{
    char *nstr;

    nstr = strcpy((char *)palloc(strlen(string)+1), string);
    return nstr;
}
