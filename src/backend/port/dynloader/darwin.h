/* $Header$ */

#include "fmgr.h"

void	   *pg_dlopen(const char *filename);
PGFunction	pg_dlsym(void *handle, const char *funcname);
void		pg_dlclose(void *handle);
const char *pg_dlerror(void);
