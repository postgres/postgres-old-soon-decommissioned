/*-------------------------------------------------------------------------
 *
 * hba.h--
 *    Interface to hba.c
 *
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef HBA_H
#define	HBA_H

#include <libpq/pqcomm.h>

extern int
hba_recvauth(const Port *port, const char database[], const char user[],
             const char DataDir[]);

#endif
