/* $Id$ */

#include <stdlib.h>
#include <math.h>				/* for pow() prototype */
#include <errno.h>

#include "config.h"
#include "rusagestub.h"

void
srandom(unsigned int seed)
{
	srand48((long int) seed);
}
