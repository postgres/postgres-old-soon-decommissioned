/* $Id$ */

#include <math.h>				/* for pow() prototype */

#include <errno.h>
#include "rusagestub.h"

long
random()
{
	return lrand48();
}
