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

#include "postgres.h"

#include "utils/bit.h"


void
BitArraySetBit(BitArray bitArray, BitIndex bitIndex)
{
	bitArray[bitIndex / BITSPERBYTE] |=
		(1 << (BITSPERBYTE - 1 - (bitIndex % BITSPERBYTE)));
}

void
BitArrayClearBit(BitArray bitArray, BitIndex bitIndex)
{
	bitArray[bitIndex / BITSPERBYTE] &=
		~(1 << (BITSPERBYTE - 1 - (bitIndex % BITSPERBYTE)));
}

bool
BitArrayBitIsSet(BitArray bitArray, BitIndex bitIndex)
{
	return ((bitArray[bitIndex / BITSPERBYTE] &
			 (1 << (BITSPERBYTE - 1 - (bitIndex % BITSPERBYTE)))
		) != 0);
}
