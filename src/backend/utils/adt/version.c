/*-------------------------------------------------------------------------
 *
 * version.c
 *	 Returns the version string
 *
 * IDENTIFICATION
 *
 * $Header$
 *
 *-------------------------------------------------------------------------
 */


#include "postgres.h"
#include "version.h"


text	   *version(void);

text *
version(void)
{
	int			n = strlen(PG_VERSION_STR) + VARHDRSZ;
	text	   *ret = (text *) palloc(n);

	VARSIZE(ret) = n;
	memcpy(VARDATA(ret), PG_VERSION_STR, strlen(PG_VERSION_STR));

	return ret;
}
