# $Header$

MODULE_big = pgxml_dom
OBJS = pgxml_dom.o
SHLIB_LINK = -lxml2
DATA_built = pgxml_dom.sql
DOCS = README.xml

ifdef USE_PGXS
PGXS = $(shell pg_config --pgxs)
include $(PGXS)
else
subdir = contrib/xml
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
