/*-------------------------------------------------------------------------
 *
 * user.h
 *	  Commands for manipulating users and groups.
 *
 *
 * $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */
#ifndef USER_H
#define USER_H

#include "nodes/parsenodes.h"


extern void CreateUser(CreateUserStmt *stmt);
extern void AlterUser(AlterUserStmt *stmt);
extern void AlterUserSet(AlterUserSetStmt *stmt);
extern void DropUser(DropUserStmt *stmt);
extern void RenameUser(const char *oldname, const char *newname);

extern void CreateGroup(CreateGroupStmt *stmt);
extern void AlterGroup(AlterGroupStmt *stmt, const char *tag);
extern void DropGroup(DropGroupStmt *stmt);
extern void RenameGroup(const char *oldname, const char *newname);

#endif   /* USER_H */
