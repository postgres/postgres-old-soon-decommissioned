#
# $Header$
#

subdir = contrib/unixdate
top_builddir = ../..
include ../../src/Makefile.global

all:

install: installdirs
	$(INSTALL_DATA) unixdate.sql $(datadir)/contrib

uninstall:
	rm -f $(datadir)/contrib/unixdate.sql

installdirs:
	$(mkinstalldirs) $(datadir)/contrib
