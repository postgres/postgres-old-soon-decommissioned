/*-------------------------------------------------------------------------
 *
 * dynloader.h
 *	  dynamic loader for QNX4 using the shared library mechanism
 *
 * Copyright (c) 1999, repas AEG Automation GmbH
 *
 *
 * IDENTIFICATION
 *	  $Header$
 *
 *	NOTES
 *
 *-------------------------------------------------------------------------
 */

#include "fmgr.h"

void	   *pg_dlopen(char *filename);
PGFunction	pg_dlsym(void *handle, char *funcname);
void		pg_dlclose(void *handle);
char	   *pg_dlerror();
