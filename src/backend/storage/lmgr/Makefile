#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for storage/lmgr
#
# IDENTIFICATION
#    $PostgreSQL$
#
#-------------------------------------------------------------------------

subdir = src/backend/storage/lmgr
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global

OBJS = lmgr.o lock.o proc.o deadlock.o lwlock.o spin.o s_lock.o

all: SUBSYS.o

SUBSYS.o: $(OBJS)
	$(LD) $(LDREL) $(LDOUT) SUBSYS.o $(OBJS)

s_lock_test: s_lock.c $(top_builddir)/src/port/libpgport.a
	$(CC) $(CPPFLAGS) $(CFLAGS) -DS_LOCK_TEST=1 s_lock.c \
		-L $(top_builddir)/src/port -lpgport -o s_lock_test

check: s_lock_test
	./s_lock_test

depend dep:
	$(CC) -MM $(CFLAGS) *.c >depend

clean distclean maintainer-clean: 
	rm -f SUBSYS.o $(OBJS) s_lock_test

ifeq (depend,$(wildcard depend))
include depend
endif
