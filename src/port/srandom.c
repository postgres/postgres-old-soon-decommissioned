/*-------------------------------------------------------------------------
 *
 * srandom.c
 *	  srandom() wrapper
 *
 * Portions Copyright (c) 1996-2010, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */

#include "c.h"

#include <math.h>


void
srandom(unsigned int seed)
{
	srand48((long int) seed);
}
