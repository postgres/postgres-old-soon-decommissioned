#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for bin/scripts
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

.SUFFIXES:

SRCDIR=../..
include ../../Makefile.global

SCRIPTS=createdb dropdb createuser dropuser vacuumdb

all: $(SCRIPTS)

createdb:
dropdb:
createuser:
dropuser:
vacuumdb:

install: $(SCRIPTS)
	$(INSTALL) $(INSTL_EXE_OPTS) $< $(BINDIR)/$(X)$<

clean:
dep depend:
