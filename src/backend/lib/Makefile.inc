#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for the lib module (miscellaneous stuff)
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

VPATH:=$(VPATH):$(CURDIR)/lib


SRCS_LIB= bit.c fstack.c hasht.c lispsort.c qsort.c stringinfo.c dllist.c

HEADERS+= fstack.h hasht.h lispsort.h qsort.h stringinfo.h dllist.h

