/*-------------------------------------------------------------------------
 *
 * bit.c
 *	  Standard bit array code.
 *
 * Portions Copyright (c) 1996-2000, PostgreSQL, Inc
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  $Header$
 *
 *-------------------------------------------------------------------------
 */

/*
 * utils/memutils.h contains declarations of the functions in this file
 */
#include "postgres.h"

#include "utils/bit.h"

void
BitArraySetBit(BitArray bitArray, BitIndex bitIndex)
{
	bitArray[bitIndex / BitsPerByte]
	|= (1 << (BitsPerByte - (bitIndex % BitsPerByte) - 1));
	return;
}

void
BitArrayClearBit(BitArray bitArray, BitIndex bitIndex)
{
	bitArray[bitIndex / BitsPerByte]
	&= ~(1 << (BitsPerByte - (bitIndex % BitsPerByte) - 1));
	return;
}

bool
BitArrayBitIsSet(BitArray bitArray, BitIndex bitIndex)
{
	return ((bool) (((bitArray[bitIndex / BitsPerByte] &
					  (1 << (BitsPerByte - (bitIndex % BitsPerByte)
							 - 1)
					   )
					  ) != 0) ? 1 : 0));
}
