#
# Makefile for utils
#
# $PostgreSQL$
#

subdir = src/backend/utils/
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

SUBDIRS     := adt cache error fmgr hash init misc mmgr sort time mb
SUBDIROBJS  := $(SUBDIRS:%=%/SUBSYS.o)


all: SUBSYS.o fmgroids.h

SUBSYS.o: fmgrtab.o $(SUBDIROBJS)
	$(LD) $(LDREL) $(LDOUT) $@ $^

$(SUBDIROBJS): $(SUBDIRS:%=%-recursive) ;

.PHONY: $(SUBDIRS:%=%-recursive)
$(SUBDIRS:%=%-recursive): fmgroids.h
	$(MAKE) -C $(subst -recursive,,$@) SUBSYS.o

fmgroids.h fmgrtab.c: Gen_fmgrtab.sh $(top_srcdir)/src/include/catalog/pg_proc.h
	AWK='$(AWK)' $(SHELL) $< $(top_srcdir)/src/include/catalog/pg_proc.h


clean:
	for dir in $(SUBDIRS); do $(MAKE) -C $$dir $@ || exit; done
	rm -f SUBSYS.o fmgrtab.o fmgroids.h fmgrtab.c
