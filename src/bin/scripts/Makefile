#-------------------------------------------------------------------------
#
# Makefile for src/bin/scripts
#
# Portions Copyright (c) 1996-2001, PostgreSQL Global Development Group
# Portions Copyright (c) 1994, Regents of the University of California
#
# $Header$
#
#-------------------------------------------------------------------------

subdir = src/bin/scripts
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

SCRIPTS := createdb dropdb createuser dropuser createlang droplang vacuumdb

all: $(SCRIPTS)

createlang: createlang.sh
	sed -e 's/@DLSUFFIX@/$(DLSUFFIX)/g' \
	    -e 's,@libdir@,$(libdir),g' \
	  $< >$@
	chmod a+x $@

install: all installdirs
	for i in $(filter-out createlang, $(SCRIPTS)); do \
	  $(INSTALL_SCRIPT) $(srcdir)/$$i $(DESTDIR)$(bindir)/$$i || exit; \
	done
	$(INSTALL_SCRIPT) createlang $(DESTDIR)$(bindir)/createlang

installdirs:
	$(mkinstalldirs) $(DESTDIR)$(bindir)

uninstall:
	rm -f $(addprefix $(DESTDIR)$(bindir)/, $(SCRIPTS))

clean distclean maintainer-clean:
	rm -f createlang
