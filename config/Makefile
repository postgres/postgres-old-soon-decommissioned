# $PostgreSQL$

subdir = config
top_builddir = ..
include $(top_builddir)/src/Makefile.global


install: all installdirs
	$(INSTALL_SCRIPT) $(srcdir)/install-sh $(DESTDIR)$(pgxsdir)/config/install-sh
	$(INSTALL_SCRIPT) $(srcdir)/mkinstalldirs $(DESTDIR)$(pgxsdir)/config/mkinstalldirs

installdirs:
	$(mkinstalldirs) $(DESTDIR)$(pgxsdir)/config

uninstall:
	rm -f $(DESTDIR)$(pgxsdir)/config/install-sh $(DESTDIR)$(pgxsdir)/config/mkinstalldirs
