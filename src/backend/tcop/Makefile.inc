#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for the traffic cop module
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

VPATH:= $(VPATH):$(CURDIR)/tcop

SRCS_TCOP= aclchk.c dest.c fastpath.c postgres.c pquery.c utility.c

HEADERS+= dest.h fastpath.h pquery.h tcopdebug.h tcopprot.h utility.h
