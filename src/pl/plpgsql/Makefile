#-------------------------------------------------------------------------
#
# Makefile for src/pl/plpgsql (PostgreSQL's SQL procedural language)
#
# Copyright (c) 1994, Regents of the University of California
#
# $Header$
#
#-------------------------------------------------------------------------

subdir = src/pl/plpgsql
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

ifneq ($(PORTNAME), qnx4)

all install installdirs uninstall distprep:
	$(MAKE) -C src $@

else  #qnx4

all install installdirs uninstall distprep:
	echo plpgsql not supported with QNX due to lack of shared library support

endif # qnx4

clean distclean maintainer-clean:
	-$(MAKE) -C src $@
