#-------------------------------------------------------------------------
#
# Makefile for contrib/pg_dumpaccounts
#
# Copyright (c) 1994, Regents of the University of California
#
# $Header$
#
#-------------------------------------------------------------------------

subdir = contrib/pg_dumpaccounts
top_builddir = ../..
include $(top_builddir)/src/Makefile.global

all: pg_dumpaccounts

pg_dumpaccounts: pg_dumpaccounts.sh
	sed -e 's,@VERSION@,$(VERSION),g' \
	    -e 's,@MULTIBYTE@,$(MULTIBYTE),g' \
	    -e 's,@bindir@,$(bindir),g' \
	  $< >$@
	chmod a+x $@

install: all installdirs
	$(INSTALL_SCRIPT) pg_dumpaccounts $(DESTDIR)$(bindir)/pg_dumpaccounts

installdirs:
	$(mkinstalldirs) $(DESTDIR)$(bindir)

uninstall:
	rm -f $(addprefix $(DESTDIR)$(bindir)/, pg_dumpaccounts)

depend dep:

clean distclean maintainer-clean:
	rm -f pg_dumpaccounts

