# $Header$

subdir = contrib/dbase
top_builddir = ../..
include $(top_builddir)/src/Makefile.global

PROGRAM = dbf2pg
OBJS	= dbf.o dbf2pg.o endian.o
PG_CPPFLAGS = -I$(libpq_srcdir)
PG_LIBS = $(libpq) -liconv

DOCS = README.dbf2pg
MAN = dbf2pg.1			# XXX not implemented

include $(top_srcdir)/contrib/contrib-global.mk
