#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for src/bin (utility programs)
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

#include ../Makefile.global

.DEFAULT all:
	$(MAKE) -C libpq $@

ifeq ($(HAVE_Cplusplus), true)
	$(MAKE) -C libpq++ $@
endif

ifeq ($(USE_TCL), true)
	$(MAKE) -C libpgtcl $@
endif

#	$(MAKE) -C perl5 $@
