/*-------------------------------------------------------------------------
 *
 * rewriteRemove.h
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
#ifndef REWRITEREMOVE_H
#define REWRITEREMOVE_H

extern char *RewriteGetRuleEventRel(char *rulename);
extern void RemoveRewriteRule(char *ruleName);
extern void RelationRemoveRules(Oid relid);

#endif	 /* REWRITEREMOVE_H */
