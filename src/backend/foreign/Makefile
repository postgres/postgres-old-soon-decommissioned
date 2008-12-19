#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for foreign
#
# IDENTIFICATION
#    $PostgreSQL$
#
#-------------------------------------------------------------------------

subdir = src/backend/foreign
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

OBJS= foreign.o

include $(top_srcdir)/src/backend/common.mk

FDW = dummy postgresql

$(addsuffix -fdw,all install installdirs uninstall distprep):
	for dir in $(FDW); do $(MAKE) -C $$dir `echo $@ | sed 's/-fdw$$//'` || exit; done

clean distclean maintainer-clean:
	for dir in $(FDW); do $(MAKE) -C $$dir $@ || exit; done
