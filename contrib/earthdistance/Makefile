# $PostgreSQL$

MODULES = earthdistance
DATA_built = earthdistance.sql
DATA = uninstall_earthdistance.sql
DOCS = README.earthdistance
REGRESS = earthdistance

SHLIB_LINK += $(filter -lm, $(LIBS))

ifdef USE_PGXS
PGXS := $(shell pg_config --pgxs)
include $(PGXS)
else
subdir = contrib/earthdistance
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
