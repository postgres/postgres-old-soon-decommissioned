/*-------------------------------------------------------------------------
 *
 * var.h
 *	  prototypes for var.c.
 *
 *
 * Copyright (c) 1994, Regents of the University of California
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
extern List *pull_var_clause(Node *clause);

#endif	 /* VAR_H */
