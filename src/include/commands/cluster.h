/*-------------------------------------------------------------------------
 *
 * cluster.h
 *	  header file for postgres cluster command stuff
 *
 * Portions Copyright (c) 1996-2002, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994-5, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef CLUSTER_H
#define CLUSTER_H

#include <nodes/parsenodes.h>
/*
 * functions
 */
extern void cluster(ClusterStmt *stmt);

extern List *get_indexattr_list(Relation OldHeap, Oid OldIndex);
extern void rebuild_rel(Oid tableOid, Oid indexOid,
					    List *indexes, bool dataCopy);


#endif   /* CLUSTER_H */
