/*-------------------------------------------------------------------------
 *
 * fe-connect.h
 *
 *	  Definitions related to setting up a connection to the backend
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 * $Id$
 *
 *-------------------------------------------------------------------------
 */
#ifndef FE_CONNECT_H
#define		   FE_CONNECT_H

#include <sys/types.h>

#include "libpq-fe.h"


/*----------------------------------------------------------------
 * Common routines and definitions
 *----------------------------------------------------------------
 */

int packetSend(PGconn *conn, const char *buf, size_t len);

#endif							/* FE_CONNECT_H */
