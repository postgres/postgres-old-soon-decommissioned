/* $Id$ */

#include <stdlib.h>
#include <math.h>
#include <errno.h>

#include "config.h"

void
srandom(unsigned int seed)
{
	srand48((long int) seed);
}
