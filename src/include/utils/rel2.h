/*-------------------------------------------------------------------------
 *
 * rel2.h
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
#ifndef TMP_REL2_H
#define TMP_REL2_H

#include "utils/rel.h"

extern IndexStrategy RelationGetIndexStrategy(Relation relation);

extern void RelationSetIndexSupport(Relation relation, IndexStrategy strategy,
						RegProcedure *support);

#endif	 /* TMP_REL2_H */
