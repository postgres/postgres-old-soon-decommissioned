#-------------------------------------------------------------------------
#
# Makefile for bin/ipcclean
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

all: ipcclean

ipcclean: ipcclean.sh
	cp $< $@

install: ipcclean
	$(INSTALL) $(INSTL_EXE_OPTS) $^ $(BINDIR)

clean:
	rm -f ipcclean

dep depend:
