#-------------------------------------------------------------------------
#
# Makefile for src/bin/ipcclean
#
# Copyright (c) 1994, Regents of the University of California
#
# $Header$
#
#-------------------------------------------------------------------------

subdir = src/bin/ipcclean
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

all: ipcclean

ipcclean: ipcclean.sh
	cp $< $@
	chmod a+x $@

install: all installdirs
	$(INSTALL_SCRIPT) ipcclean $(bindir)/ipcclean

installdirs:
	$(mkinstalldirs) $(bindir)

uninstall:
	rm -f $(bindir)/ipcclean

clean distclean maintainer-clean:
	rm -f ipcclean
