#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for bin/initdb
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

all: initdb

install: initdb
	$(INSTALL) $(INSTL_EXE_OPTS) $< $(BINDIR)/$<

clean:
	rm -f initdb

dep depend:
