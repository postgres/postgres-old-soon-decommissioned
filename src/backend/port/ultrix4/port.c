/*-------------------------------------------------------------------------
 *
 * port.c--
 *    Ultrix-specific routines
 *
 * Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *    $Header$
 *
 *-------------------------------------------------------------------------
 */
#include <sys/syscall.h>
#include <sys/sysmips.h>

#include "c.h"

void
init_address_fixup()
{
#ifdef NOFIXADE
    syscall(SYS_sysmips, MIPS_FIXADE, 0, NULL, NULL, NULL);
#endif /* NOFIXADE */
}
