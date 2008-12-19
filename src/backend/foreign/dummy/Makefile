#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for dummy foreign-data wrapper
#
# IDENTIFICATION
#    $PostgreSQL$
#
#-------------------------------------------------------------------------

subdir = src/backend/foreign/dummy
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global

NAME = dummy_fdw
OBJS = dummy_fdw.o

include $(top_srcdir)/src/Makefile.shlib

all: all-shared-lib

install: all install-lib

installdirs: installdirs-lib

clean distclean maintainer-clean: clean-lib
	rm -f $(OBJS)
