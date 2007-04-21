# $PostgreSQL$

MODULE_big = uuid-ossp
OBJS = uuid-ossp.o
DATA_built = uuid-ossp.sql
DATA = uninstall_uuid-ossp.sql
DOCS = README.uuid-ossp

SHLIB_LINK += -lossp-uuid

ifdef USE_PGXS
PGXS := $(shell pg_config --pgxs)
include $(PGXS)
else
subdir = contrib/uuid-ossp
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
