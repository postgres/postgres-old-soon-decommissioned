/*-------------------------------------------------------------------------
 *
 * copy.h
 *	  Definitions for using the POSTGRES copy command.
 *
 *
 * Portions Copyright (c) 1996-2007, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */
#ifndef COPY_H
#define COPY_H

#include "nodes/parsenodes.h"
#include "tcop/dest.h"


extern uint64 DoCopy(const CopyStmt *stmt);

extern DestReceiver *CreateCopyDestReceiver(void);

#endif   /* COPY_H */
