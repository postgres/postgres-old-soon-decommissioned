# $PostgreSQL$

MODULES = rtree_gist
DATA_built = rtree_gist.sql
DOCS = README.rtree_gist
REGRESS = rtree_gist

ifdef USE_PGXS
PGXS = $(shell pg_config --pgxs)
include $(PGXS)
else
subdir = contrib/rtree_gist
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
