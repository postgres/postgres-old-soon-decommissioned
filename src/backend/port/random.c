/* $Id$ */

#include <stdlib.h>
#include <math.h>
#include <errno.h>

#include "config.h"

long
random()
{
	return lrand48();
}
