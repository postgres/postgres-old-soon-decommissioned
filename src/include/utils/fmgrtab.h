/*-------------------------------------------------------------------------
 *
 * fmgrtab.h
 *
 *
 *
 * Portions Copyright (c) 1996-2000, PostgreSQL, Inc
 * Portions Copyright (c) 1994, Regents of the University of California
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
	char	   *funcName;
} FmgrCall;

extern FmgrCall *fmgr_isbuiltin(Oid id);
extern func_ptr fmgr_lookupByName(char *name);
extern void load_file(char *filename);

#endif	 /* FMGRTAB_H */
