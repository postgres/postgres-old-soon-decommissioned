/*-------------------------------------------------------------------------
 *
 * indexnode.c
 *	  Routines to find all indices on a relation
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  $Header$
 *
 *-------------------------------------------------------------------------
 */
#include "postgres.h"

#include "optimizer/pathnode.h"
#include "optimizer/plancat.h"


/*
 * find_relation_indices
 *	  Returns a list of index nodes containing appropriate information for
 *	  each (secondary) index defined on a relation.
 *
 */
List *
find_relation_indices(Query *root, RelOptInfo *rel)
{
	if (rel->indexed)
		return find_secondary_indexes(root, lfirsti(rel->relids));
	else
		return NIL;
}
