/*-------------------------------------------------------------------------
 *
 * version.h--
 *    Header file for versions.  
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef VERSION_H
#define VERSION_H


extern void DefineVersion(char *name, char *fromRelname, char *date);
extern void VersionCreate(char *vname, char *bname);
extern void VersionAppend(char *vname, char *bname);
extern void VersionRetrieve(char *vname, char *bname, char *snapshot);
extern void VersionDelete(char *vname, char *bname, char *snapshot);
extern void VersionReplace(char *vname, char *bname, char *snapshot);
    
#endif	/* VERSION_H */
