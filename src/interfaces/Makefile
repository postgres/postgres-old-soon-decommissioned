#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for src/bin (utility programs)
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR= ..
include $(SRCDIR)/Makefile.global


PERL_CLEAN := DO_NOTHING
install: PERL_CLEAN := clean


.DEFAULT all install clean dep depend distclean:
	$(MAKE) -C libpq $@
	$(MAKE) -C ecpg $@
ifeq ($(HAVE_Cplusplus), true)
	$(MAKE) -C libpq++ $@
else
	echo $(HAVE_Cplusplus): No C++
endif
ifeq ($(USE_TCL), true)
	$(MAKE) -C libpgtcl $@
endif
ifeq ($(USE_PERL), true)
	-$(MAKE) -C perl5 $(PERL_CLEAN)
	$(MAKE) perl5/Makefile
	$(MAKE) -C perl5 $@
endif
ifeq ($(USE_ODBC), true)
	$(MAKE) -C odbc $@
endif

perl5/Makefile: perl5/Makefile.PL
	cd perl5 && perl Makefile.PL
