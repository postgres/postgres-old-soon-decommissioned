# mysql conversion Perl scripts
# $PostgreSQL$

MODULES = 
SCRIPTS = my2pg.pl  mysql2pgsql
DOCS = README.mysql

ifdef USE_PGXS
PGXS = $(shell pg_config --pgxs)
include $(PGXS)
else
subdir = contrib/mysql
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
