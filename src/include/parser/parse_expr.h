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

Node *transformExpr(ParseState *pstate, Node *expr, int precedence);

Node *transformIdent(ParseState *pstate, Node *expr, int precedence);

Oid exprType(Node *expr);

Node *handleNestedDots(ParseState *pstate, Attr *attr, int *curr_resno);

Node *parser_typecast(Value *expr, TypeName *typename, int typlen);

Node *parser_typecast2(Node *expr, Oid exprType, Type tp, int typlen);

#endif							/* PARSE_EXPR_H */

