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

/*----------------------------------------------------------------
 * Common routines and definitions
 *----------------------------------------------------------------
 */

extern int		packetSend(Port * port, PacketBuf * buf, PacketLen len, bool nonBlocking);

#endif							/* FE_CONNECT_H */
#ifndef FE_CONNECT_H
#define FE_CONNECT_H

int				packetSend(Port * port, PacketBuf * buf, PacketLen len, bool nonBlocking);

#endif
