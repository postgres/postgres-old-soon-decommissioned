/*-------------------------------------------------------------------------
 *
 * parse_expr.h
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
#ifndef PARSE_EXPR_H
#define PARSE_EXPR_H

#include "parser/parse_node.h"
#include "parser/parse_type.h"

#define EXPR_COLUMN_FIRST	1
#define EXPR_RELATION_FIRST 2

extern Node *transformExpr(ParseState *pstate, Node *expr, int precedence);
extern Oid	exprType(Node *expr);
extern int32 exprTypmod(Node *expr);

#endif	 /* PARSE_EXPR_H */
