/*-------------------------------------------------------------------------
 *
 * pgtz.c
 *	  Timezone Library Integration Functions
 *
 * Portions Copyright (c) 1996-2003, PostgreSQL Global Development Group
 *
 * IDENTIFICATION
 *	  $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */

#include "pgtz.h"
#include "tzfile.h"


static char tzdir[MAXPGPATH];
static int	done_tzdir = 0;
char *
pg_TZDIR(void)
{
	char	   *p;

	if (done_tzdir)
		return tzdir;

	get_share_dir(my_exec_path, tzdir);
	strcat(tzdir, "/timezone");

	done_tzdir = 1;
	return tzdir;
}
