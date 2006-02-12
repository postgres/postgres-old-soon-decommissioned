# $PostgreSQL$

MODULE_big = pg_freespacemap
OBJS	= pg_freespacemap.o

DATA_built = pg_freespacemap.sql 
DOCS = README.pg_freespacemap

ifdef USE_PGXS
PGXS := $(shell pg_config --pgxs)
include $(PGXS)
else
subdir = contrib/pg_freespacemap
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
