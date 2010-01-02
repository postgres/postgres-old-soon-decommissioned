/*-------------------------------------------------------------------------
 *
 * walwriter.h
 *	  Exports from postmaster/walwriter.c.
 *
 * Portions Copyright (c) 1996-2010, PostgreSQL Global Development Group
 *
 * $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */
#ifndef _WALWRITER_H
#define _WALWRITER_H

/* GUC options */
extern int	WalWriterDelay;

extern void WalWriterMain(void);

#endif   /* _WALWRITER_H */
