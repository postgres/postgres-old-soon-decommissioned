#-------------------------------------------------------------------------
#
# Makefile for src/bin/pgaccess
#
# Copyright (c) 1994, Regents of the University of California
#
# $Header$
#
#-------------------------------------------------------------------------

subdir = src/bin/pgaccess
top_builddir = ../../..
include ../../Makefile.global

pgaccessdir = $(datadir)/pgaccess

all: pgaccess

pgaccess: pgaccess.sh
	sed -e 's,__wish__,$(WISH),' -e 's,__PGACCESSHOME__,$(pgaccessdir),' < $< > $@

install: all installdirs
	$(INSTALL_SCRIPT) pgaccess $(bindir)/pgaccess
	$(INSTALL_SCRIPT) main.tcl $(pgaccessdir)
	$(INSTALL_DATA) lib/*.tcl $(pgaccessdir)/lib
	$(INSTALL_DATA) lib/help/*.hlp $(pgaccessdir)/lib/help
	$(INSTALL_DATA) lib/languages/[a-z]* $(pgaccessdir)/lib/languages
	$(INSTALL_DATA) images/*.gif $(pgaccessdir)/images

installdirs:
	$(mkinstalldirs) $(bindir) $(pgaccessdir)/lib/help $(pgaccessdir)/lib/languages $(pgaccessdir)/images

uninstall:
	rm -f $(bindir)/pgaccess
	rm -rf $(pgaccessdir)

clean distclean maintainer-clean:
	rm -f pgaccess
