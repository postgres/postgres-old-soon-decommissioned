/*-------------------------------------------------------------------------
 *
 * isnan.c
 *	  isnan() implementation
 *
 * Copyright (c) 1999, repas AEG Automation GmbH
 *
 *
 * IDENTIFICATION
 *	  $Header$
 *
 *-------------------------------------------------------------------------
 */

#include "os.h"

unsigned char __nan[8] = __nan_bytes;

int isnan(double dsrc)
{
  return !memcmp( &dsrc, &NAN, sizeof( double ) );
}
