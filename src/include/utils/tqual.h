/*-------------------------------------------------------------------------
 *
 * tqual.h--
 *	  POSTGRES "time" qualification definitions.
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef TQUAL_H
#define TQUAL_H

#include <access/htup.h>

/* As above, plus updates in this command */

extern void setheapoverride(bool on);
extern bool heapisoverride(void);

extern bool HeapTupleSatisfiesVisibility(HeapTuple tuple, bool seeself);


#endif							/* TQUAL_H */
