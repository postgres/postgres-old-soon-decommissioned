#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for bin/destroydb
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

all: destroydb

destroydb: destroydb.sh
	cp destroydb.sh destroydb

install: destroydb
	$(INSTALL) $(INSTL_EXE_OPTS) $< $(DESTDIR)$(BINDIR)/$<

clean:
	rm -f destroydb

dep depend:
