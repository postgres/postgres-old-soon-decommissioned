/*-------------------------------------------------------------------------
 *
 * fmgrtab.h
 *
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef FMGRTAB_H
#define FMGRTAB_H


typedef struct
{
	Oid			proid;
	int			nargs;
	func_ptr	func;
	int			dummy;			/* pad struct to 4 words for fast indexing */
} FmgrCall;

extern FmgrCall *fmgr_isbuiltin(Oid id);

extern void load_file(char *filename);

#endif	 /* FMGRTAB_H */
