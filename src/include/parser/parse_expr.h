/*-------------------------------------------------------------------------
 *
 * parse_exer.h
 *
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef PARSE_EXPR_H
#define PARSE_EXPR_H

#include <nodes/nodes.h>
#include <nodes/parsenodes.h>
#include <nodes/primnodes.h>
#include <parser/parse_node.h>

extern Node *transformExpr(ParseState *pstate, Node *expr, int precedence);
extern Node *transformIdent(ParseState *pstate, Node *expr, int precedence);
extern Oid exprType(Node *expr);
extern Node *handleNestedDots(ParseState *pstate, Attr *attr,
		int *curr_resno, int precedence);
extern Node *parser_typecast2(Node *expr, Oid exprType, Type tp, int typlen);

#endif							/* PARSE_EXPR_H */

