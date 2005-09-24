/* $PostgreSQL$ */
#ifndef MBPRINT_H
#define MBPRINT_H

#include "mb/pg_wchar.h"

extern char *mbvalidate(char *pwcs, int encoding);

extern int	pg_wcswidth(const char *pwcs, size_t len, int encoding);

#endif   /* MBPRINT_H */
