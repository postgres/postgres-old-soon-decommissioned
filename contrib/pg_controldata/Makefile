# $Header$

subdir = contrib/pg_controldata
top_builddir = ../..
include $(top_builddir)/src/Makefile.global

all: submake-libpgport

PROGRAM = pg_controldata
OBJS	= pg_controldata.o pg_crc.o

pg_crc.c: $(top_srcdir)/src/backend/utils/hash/pg_crc.c
	rm -f $@ && $(LN_S) $< .

EXTRA_CLEAN = pg_crc.c

DOCS = README.pg_controldata

include $(top_srcdir)/contrib/contrib-global.mk
