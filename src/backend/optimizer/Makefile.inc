#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for the optimizer module
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

optdir=$(CURDIR)/optimizer
VPATH:=$(VPATH):$(optdir):\
	$(optdir)/path:$(optdir)/prep:$(optdir)/util:$(optdir)/plan

SUBSRCS=
include $(optdir)/path/Makefile.inc
include $(optdir)/prep/Makefile.inc
include $(optdir)/util/Makefile.inc
include $(optdir)/plan/Makefile.inc
SRCS_OPTIMIZER:= $(SUBSRCS)

HEADERS+= clauseinfo.h clauses.h cost.h internal.h joininfo.h keys.h \
	ordering.h pathnode.h paths.h plancat.h planmain.h \
	planner.h prep.h tlist.h var.h xfunc.h


