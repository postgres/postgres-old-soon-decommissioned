# $PostgreSQL$

subdir = contrib/pg_dumplo
top_builddir = ../..
include $(top_builddir)/src/Makefile.global

PROGRAM = pg_dumplo
OBJS	= main.o lo_export.o lo_import.o utils.o

PG_CPPFLAGS = -I$(libpq_srcdir)
PG_LIBS = $(libpq)

DOCS = README.pg_dumplo

include $(top_srcdir)/contrib/contrib-global.mk
