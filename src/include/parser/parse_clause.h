/*-------------------------------------------------------------------------
 *
 * parse_clause.h
 *
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef PARSE_CLAUSE_H
#define PARSE_CLAUSE_H

#include <nodes/pg_list.h>
#include <nodes/nodes.h>
#include <nodes/parsenodes.h>
#include <nodes/primnodes.h>
#include <parser/parse_node.h>

void parseFromClause(ParseState *pstate, List *frmList);

void makeRangeTable(ParseState *pstate, char *relname, List *frmList);

Node *transformWhereClause(ParseState *pstate, Node *a_expr);

TargetEntry *find_targetlist_entry(ParseState *pstate,
			SortGroupBy *sortgroupby, List *tlist);

List *transformGroupClause(ParseState *pstate, List *grouplist,
			List *targetlist);

List *transformSortClause(ParseState *pstate,
					List *orderlist, List *targetlist,
					char *uniqueFlag);

#endif							/* PARSE_CLAUSE_H */

