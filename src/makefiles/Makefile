# $PostgreSQL$

subdir = src/makefiles
top_builddir = ../..
include $(top_builddir)/src/Makefile.global


install: all installdirs
	$(INSTALL_DATA) $(srcdir)/pgxs.mk $(DESTDIR)$(pgxsdir)/$(subdir)/

installdirs:
	$(mkinstalldirs) $(DESTDIR)$(pgxsdir)/$(subdir)

uninstall:
	rm -f $(DESTDIR)$(pgxsdir)/$(subdir)/pgxs.mk
