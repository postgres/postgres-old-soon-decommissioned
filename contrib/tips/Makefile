#
# $Header$
#

subdir = contrib/tips
top_builddir = ../..
include ../../src/Makefile.global

all:

install: installdirs
	$(INSTALL_DATA) README.apachelog $(docdir)/contrib

installdirs:
	$(mkinstalldirs) $(docdir)/contrib

uninstall:
	rm -f $(docdir)/contrib/README.apachelog
