# $Header$

subdir = contrib/findoidjoins
top_builddir = ../..
include $(top_builddir)/src/Makefile.global

PROGRAM = findoidjoins
OBJS	= findoidjoins.o

libpgeasy_srcdir = $(top_srcdir)/src/interfaces/libpgeasy
libpgeasy_builddir = $(top_builddir)/src/interfaces/libpgeasy

PG_CPPFLAGS = -I$(libpgeasy_srcdir) -I$(libpq_srcdir)
PG_LIBS = -L$(libpgeasy_builddir) -lpgeasy $(libpq)

SCRIPTS = make_oidjoins_check
DOCS = README.findoidjoins

include $(top_srcdir)/contrib/contrib-global.mk
