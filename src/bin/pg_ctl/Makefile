#-------------------------------------------------------------------------
#
# Makefile for src/bin/pg_ctl
#
# Copyright (c) 1999, PostgreSQL Global Development Group
#
# $Header$
#
#-------------------------------------------------------------------------

subdir = src/bin/pg_ctl
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

all: pg_ctl

pg_ctl: pg_ctl.sh
	cp $< $@
	chmod a+x $@

install: all installdirs
	$(INSTALL_SCRIPT) pg_ctl $(DESTDIR)$(bindir)/pg_ctl

installdirs:
	$(mkinstalldirs) $(DESTDIR)$(bindir)

uninstall:
	rm -f $(DESTDIR)$(bindir)/pg_ctl

clean distclean maintainer-clean:
	rm -f pg_ctl
