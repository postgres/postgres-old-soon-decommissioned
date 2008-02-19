#
# Makefile for utils
#
# $PostgreSQL$
#

subdir = src/backend/utils
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

OBJS        = fmgrtab.o
SUBDIRS     = adt cache error fmgr hash init mb misc mmgr resowner sort time

include $(top_srcdir)/src/backend/common.mk

all: fmgroids.h

$(SUBDIRS:%=%-recursive): fmgroids.h

fmgroids.h fmgrtab.c: Gen_fmgrtab.sh $(top_srcdir)/src/include/catalog/pg_proc.h
	AWK='$(AWK)' $(SHELL) $< $(top_srcdir)/src/include/catalog/pg_proc.h

clean:
	rm -f fmgroids.h fmgrtab.c
