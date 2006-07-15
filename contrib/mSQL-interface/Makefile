#
# $PostgreSQL$
#

MODULE_big = mpgsql
SO_MAJOR_VERSION = 0
SO_MINOR_VERSION = 0
OBJS	= mpgsql.o
DOCS = README.mpgsql

PG_CPPFLAGS = -I$(libpq_srcdir)

ifdef USE_PGXS
PGXS := $(shell pg_config --pgxs)
include $(PGXS)
else
subdir = contrib/mSQL-interface
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
