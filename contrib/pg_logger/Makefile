# $PostgreSQL$

PROGRAM = pg_logger
OBJS	= pg_logger.o

DOCS = README.pg_logger

ifdef USE_PGXS
PGXS = $(shell pg_config --pgxs)
include $(PGXS)
else
subdir = contrib/pg_logger
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
