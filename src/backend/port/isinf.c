/* $Id$ */

#include <ieeefp.h>
#include <math.h>  

#include "config.h"


int
isinf(double x)
{
	if((fpclass(x) == FP_PINF) || (fpclass(x) == FP_NINF)) return 1;
	else return 0;
}

