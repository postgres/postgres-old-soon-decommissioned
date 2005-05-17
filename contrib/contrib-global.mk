# $PostgreSQL$

NO_PGXS = 1
REGRESS_OPTS = --dbname=$(CONTRIB_TESTDB)
include $(top_srcdir)/src/makefiles/pgxs.mk
