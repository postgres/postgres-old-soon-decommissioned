#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for bin/createdb
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

all: createdb

createdb: createdb.sh
	cp createdb.sh createdb

install: createdb
	$(INSTALL) $(INSTL_EXE_OPTS) $< $(DESTDIR)$(BINDIR)/$<

clean:
	rm -f createdb

dep:
