# $PostgreSQL$

MODULE_big = fuzzystrmatch
OBJS = fuzzystrmatch.o dmetaphone.o
DATA_built = fuzzystrmatch.sql
DATA = uninstall_fuzzystrmatch.sql
DOCS = README.fuzzystrmatch README.soundex

ifdef USE_PGXS
PGXS := $(shell pg_config --pgxs)
include $(PGXS)
else
subdir = contrib/fuzzystrmatch
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
