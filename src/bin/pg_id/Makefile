#-------------------------------------------------------------------------
#
# Makefile
#    Makefile for bin/pg_id
#
# Copyright (C) 2000 by PostgreSQL Global Development Team
#
# $Header$
#
#-------------------------------------------------------------------------

SRCDIR= ../..
include ../../Makefile.global

OBJS= pg_id.o

all: pg_id

pg_id: $(OBJS)
	$(CC) -o pg_id $(OBJS) $(LDFLAGS)

install: pg_id
	$(INSTALL) $(INSTL_EXE_OPTS) pg_id$(X) $(BINDIR)/pg_id$(X)

depend dep:
	$(CC) -MM $(CFLAGS) *.c >depend

clean:
	rm -f pg_id$(X) $(OBJS)

ifeq (depend,$(wildcard depend))
include depend
endif
