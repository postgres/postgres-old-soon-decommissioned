# $Header$

subdir = src/backend/po
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global


gettext-files:
	find $(srcdir)/.. -name '*.c' >$@

maintainer-clean:
	rm -f gettext-files
