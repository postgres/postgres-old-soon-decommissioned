/*-------------------------------------------------------------------------
 *
 * bgwriter.h
 *	  Exports from postmaster/bgwriter.c.
 *
 * Portions Copyright (c) 1996-2003, PostgreSQL Global Development Group
 *
 * $PostgreSQL$
 *
 *-------------------------------------------------------------------------
 */
#ifndef _BGWRITER_H
#define _BGWRITER_H

/* GUC options */
extern int	BgWriterDelay;
extern int	BgWriterPercent;
extern int	BgWriterMaxPages;
extern int	CheckPointTimeout;
extern int	CheckPointWarning;

extern void BackgroundWriterMain(void);

extern void RequestCheckpoint(bool waitforit);

extern int	BgWriterShmemSize(void);
extern void BgWriterShmemInit(void);

#endif   /* _BGWRITER_H */
