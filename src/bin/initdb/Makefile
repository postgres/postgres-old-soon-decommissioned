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

SEDSCRIPT= \
    -e "s^_fUnKy_NAMEDATALEN_sTuFf_^$(NAMEDATALEN)^g" \
    -e "s^_fUnKy_OIDNAMELEN_sTuFf_^$(OIDNAMELEN)^g" 

all: initdb

initdb: initdb.sh
	sed $(SEDSCRIPT) <initdb.sh >initdb

install: initdb
	$(INSTALL) $(INSTL_EXE_OPTS) $< $(BINDIR)/$<

clean:
	rm -f initdb

dep:
