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

SCRIPTS=createdb dropdb createuser dropuser createlang droplang vacuumdb

all: $(SCRIPTS)

createdb:
dropdb:
createuser:
dropuser:

createlang: createlang.sh
	sed -e 's/__DLSUFFIX__/$(DLSUFFIX)/' createlang.sh > createlang
droplang:

vacuumdb:

install: $(SCRIPTS)
	$(INSTALL) $(INSTL_EXE_OPTS) $+ $(BINDIR)

clean:
	rm -f createlang

dep depend:
