/*-------------------------------------------------------------------------
 *
 * fcache2.h
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
#ifndef FCACHE2_H
#define FCACHE2_H

#include "nodes/execnodes.h"

extern void setFcache(Node *node, Oid foid, List *argList, ExprContext *econtext);

#endif	 /* FCACHE2_H */
