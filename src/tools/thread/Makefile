#-------------------------------------------------------------------------
#
# Makefile for tools/thread
#
# Copyright (C) 2003 by PostgreSQL Global Development Team
#
# $Header$
#
#-------------------------------------------------------------------------

subdir = tools/thread
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

override CFLAGS += $(THREAD_CPPFLAGS)

LDFLAGS += $(THREAD_LIBS)

all: thread_test

thread_test: thread_test.o
	$(CC) $(CFLAGS) $(LDFLAGS) $^ $(LIBS) -o $@

clean distclean maintainer-clean:
	rm -f thread_test$(X) thread_test.o
