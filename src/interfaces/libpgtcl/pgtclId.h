/*-------------------------------------------------------------------------
 *
 * pgtclId.h--
 *    useful routines to convert between strings and pointers
 *  Needed because everything in tcl is a string, but often, pointers
 *  to data structures are needed.
 *    
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */

extern void PgSetId(char *id, void *ptr);
extern void* PgGetId(char *id);
extern int PgValidId(char* id);
