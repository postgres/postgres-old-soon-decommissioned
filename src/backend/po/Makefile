# $Header$

subdir = src/backend/po
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global


gettext-files:
	find $(srcdir)/.. -name '*.c' -print >$@

maintainer-clean:
	rm -f gettext-files
