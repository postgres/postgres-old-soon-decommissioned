#-------------------------------------------------------------------------
#
# Makefile for src/bin/initlocation
#
# Portions Copyright (c) 1996-2001, PostgreSQL Global Development Group
# Portions Copyright (c) 1994, Regents of the University of California
#
# $Header$
#
#-------------------------------------------------------------------------

subdir = src/bin/initlocation
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

all: initlocation

initlocation: initlocation.sh
	cp $< $@
	chmod a+x $@

install: all installdirs
	$(INSTALL_SCRIPT) initlocation $(DESTDIR)$(bindir)/initlocation

installdirs:
	$(mkinstalldirs) $(DESTDIR)$(bindir)

uninstall:
	rm -f $(DESTDIR)$(bindir)/initlocation

clean distclean maintainer-clean:
	rm -f initlocation
