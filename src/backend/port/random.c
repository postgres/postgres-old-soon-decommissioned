/* $Id$ */

#include <stdlib.h>
#include <math.h>				/* for pow() prototype */
#include <errno.h>

long
random()
{
	return lrand48();
}
