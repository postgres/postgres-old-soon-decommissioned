#-------------------------------------------------------------------------
#
#    Makefile for bin/pg_encoding
#
# Copyright (c) 1998, PostgreSQL development group
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR= ../..
include $(SRCDIR)/Makefile.global

OBJS= pg_encoding.o

all: submake pg_encoding

pg_encoding: $(OBJS)
	$(CC) -o pg_encoding $(OBJS) $(LIBPQ) $(LDFLAGS) $(CFLAGS)

.PHONY: submake

submake:
	$(MAKE) -C $(LIBPQDIR) libpq.a

install: pg_encoding
	$(INSTALL) $(INSTL_EXE_OPTS) pg_encoding$(X) $(BINDIR)/pg_encoding$(X)

depend dep:
	$(CC) -MM $(CFLAGS) *.c >depend

clean: 
	rm -f pg_encoding$(X) pg_encoding.o

ifeq (depend,$(wildcard depend))
include depend
endif
