# $PostgreSQL$

MODULES = fti
DATA_built = fti.sql
DOCS = README.fti
SCRIPTS = fti.pl

ifdef USE_PGXS
PGXS = $(shell pg_config --pgxs)
include $(PGXS)
else
subdir = contrib/fulltextindex
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
