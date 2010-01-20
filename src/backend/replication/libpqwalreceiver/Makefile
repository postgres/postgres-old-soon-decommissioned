#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for src/backend/replication/libpqwalreceiver
#
# IDENTIFICATION
#    $PostgreSQL$
#
#-------------------------------------------------------------------------

subdir = src/backend/postmaster/libpqwalreceiver
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global

override CPPFLAGS := -I$(srcdir) -I$(libpq_srcdir) $(CPPFLAGS)

OBJS = libpqwalreceiver.o
SHLIB_LINK = $(libpq)
NAME = libpqwalreceiver

all: submake-libpq all-shared-lib

include $(top_srcdir)/src/Makefile.shlib

install: all installdirs install-lib

installdirs: installdirs-lib

uninstall: uninstall-lib

clean distclean maintainer-clean: clean-lib
	rm -f $(OBJS)
