/*-------------------------------------------------------------------------
 *
 * parser.h
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
#ifndef PARSER_H
#define PARSER_H

#include "parser/parse_node.h"

extern List *parser(char *str, Oid *typev, int nargs);

#endif	 /* PARSER_H */
