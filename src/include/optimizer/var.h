/*-------------------------------------------------------------------------
 *
 * var.h
 *	  prototypes for var.c.
 *
 *
 * Portions Copyright (c) 1996-2001, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef VAR_H
#define VAR_H

#include "nodes/primnodes.h"

extern List *pull_varnos(Node *me);
extern bool contain_var_clause(Node *clause);
extern List *pull_var_clause(Node *clause, bool includeUpperVars);

#endif	 /* VAR_H */
