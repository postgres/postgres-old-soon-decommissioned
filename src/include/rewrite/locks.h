/*-------------------------------------------------------------------------
 *
 * locks.h--
 *    
 *
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef	LOCKS_H
#define	LOCKS_H


extern List *matchLocks(CmdType event, RuleLock *rulelocks, int varno,
			Query *parsetree);

#endif	/* LOCKS_H */
