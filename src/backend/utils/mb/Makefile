#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for utils/mb
#
# IDENTIFICATION
#    $PostgreSQL$
#
#-------------------------------------------------------------------------

subdir = src/backend/utils/mb
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global

OBJS = encnames.o conv.o mbutils.o wchar.o wstrcmp.o wstrncmp.o
DIRS = conversion_procs

all install installdirs: SUBSYS.o

uninstall distprep:

clean distclean maintainer-clean:
	rm -f SUBSYS.o $(OBJS)
	@for dir in $(DIRS); do $(MAKE) -C $$dir $@; done

SUBSYS.o: $(OBJS)
	$(LD) $(LDREL) $(LDOUT) $@ $^

depend dep:
	$(CC) -MM $(CFLAGS) *.c >depend

ifeq (depend,$(wildcard depend))
include depend
endif
