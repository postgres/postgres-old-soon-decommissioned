#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for bin/cleardbdir
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR= ../..
include ../../Makefile.global

all: cleardbdir

cleardbdir:
	cp cleardbdir.sh cleardbdir

install: cleardbdir
	$(INSTALL) $(INSTL_EXE_OPTS) $< $(DESTDIR)$(BINDIR)/$<

clean: 
	rm -f cleardbdir

