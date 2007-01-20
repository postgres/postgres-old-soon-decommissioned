/*-------------------------------------------------------------------------
 *
 * version.c
 *	 Returns the PostgreSQL version string
 *
 * Copyright (c) 1998-2007, PostgreSQL Global Development Group
 *
 * IDENTIFICATION
 *
 * $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */

#include "postgres.h"

#include "utils/builtins.h"


Datum
pgsql_version(PG_FUNCTION_ARGS)
{
	int			n = strlen(PG_VERSION_STR);
	text	   *ret = (text *) palloc(n + VARHDRSZ);

	VARATT_SIZEP(ret) = n + VARHDRSZ;
	memcpy(VARDATA(ret), PG_VERSION_STR, n);

	PG_RETURN_TEXT_P(ret);
}
