#-------------------------------------------------------------------------
#
# Makefile for src/bin/pg_resetxlog
#
# Copyright (c) 1998-2002, PostgreSQL Global Development Group
#
# $PostgreSQL$
#
#-------------------------------------------------------------------------

subdir = src/bin/pg_resetxlog
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

override CPPFLAGS += -DFRONTEND

OBJS= pg_resetxlog.o pg_crc.o dirmod.o exec.o

all: submake-libpgport pg_resetxlog

pg_resetxlog: $(OBJS)
	$(CC) $(CFLAGS) $^ $(LDFLAGS) $(LIBS) -o $@$(X)

dirmod.c: % : $(top_srcdir)/src/port/%
	rm -f $@ && $(LN_S) $< .

pg_crc.c: $(top_srcdir)/src/backend/utils/hash/pg_crc.c
	rm -f $@ && $(LN_S) $< .

exec.c: % : $(top_srcdir)/src/port/%
	rm -f $@ && $(LN_S) $< .

install: all installdirs
	$(INSTALL_PROGRAM) pg_resetxlog$(X) $(DESTDIR)$(bindir)/pg_resetxlog$(X)

installdirs:
	$(mkinstalldirs) $(DESTDIR)$(bindir)

uninstall:
	rm -f $(DESTDIR)$(bindir)/pg_resetxlog$(X)

clean distclean maintainer-clean:
	rm -f pg_resetxlog$(X) $(OBJS) pg_crc.c dirmod.c exec.c
