#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for bin/destroylang
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

all: destroylang

destroylang: destroylang.sh
	cp destroylang.sh destroylang

install: destroylang
	$(INSTALL) $(INSTL_EXE_OPTS) $< $(BINDIR)/$<

clean:
	rm -f destroylang

dep depend:
