#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for bin/pg_ctl
#
# Copyright (c) 1999, PostgreSQL Global Development Group
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR= ../..
include ../../Makefile.global

all: pg_ctl

pg_ctl: pg_ctl.sh
	cat pg_ctl.sh > pg_ctl

install: pg_ctl
	$(INSTALL) $(INSTL_EXE_OPTS) $+ $(BINDIR)
	$(INSTALL) $(INSTLOPTS) postmaster.opts.default.sample $(LIBDIR)

clean:
	rm -f pg_ctl

dep depend:
