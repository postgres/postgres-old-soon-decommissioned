# $PostgreSQL$

subdir = contrib/vacuumlo
top_builddir = ../..
include $(top_builddir)/src/Makefile.global

PROGRAM = vacuumlo
OBJS	= vacuumlo.o

PG_CPPFLAGS = -I$(libpq_srcdir)
PG_LIBS = $(libpq)

DOCS = README.vacuumlo

include $(top_srcdir)/contrib/contrib-global.mk
