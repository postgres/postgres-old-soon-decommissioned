#-------------------------------------------------------------------------
#
# Makefile
#    Makefile for doc directory to install man pages
#
# Copyright (c) 1994, Regents of the University of California
# Copyright (c) 1996, Dr George D Detlefsen
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR=..
include ../Makefile.global

install:
	-mkdir $(DESTDIR)$(POSTMANDIR)
	-mkdir $(DESTDIR)$(POSTMANDIR)/man1
	-mkdir $(DESTDIR)$(POSTMANDIR)/man3
	-mkdir $(DESTDIR)$(POSTMANDIR)/man5
	-mkdir $(DESTDIR)$(POSTMANDIR)/manl
	cp *.1* $(DESTDIR)$(POSTMANDIR)/man1
	cp *.3* $(DESTDIR)$(POSTMANDIR)/man3
	cp *.5* $(DESTDIR)$(POSTMANDIR)/man5
	cp *.l* $(DESTDIR)$(POSTMANDIR)/manl

clean:

all:

dep depend:
