#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for utils/mb
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR = ../../..
include ../../../Makefile.global

OBJS = common.o conv.o mbutils.o wchar.o wstrcmp.o wstrncmp.o variable.o \
       big5.o

all: SUBSYS.o

SUBSYS.o: $(OBJS)
	$(LD) $(LDREL) $(LDOUT) SUBSYS.o $(OBJS)

palloc.o: palloc.c
	$(CC) -c $(CFLAGS) palloc.c

sjistest.o: sjistest.c
	$(CC) -c $(CFLAGS) sjistest.c

liketest.o: liketest.c
	$(CC) -c $(CFLAGS) liketest.c

sjistest: $(OBJS) sjistest.o palloc.o
	$(CC) -o sjistest sjistest.o palloc.o \
	common.o mbutils.o wchar.o wstrcmp.o wstrncmp.o variable.o \
       big5.o $(LDFLAGS)

liketest: $(OBJS) liketest.o palloc.o
	$(CC) -o liketest liketest.o palloc.o conv.o \
	common.o mbutils.o wchar.o wstrcmp.o wstrncmp.o variable.o \
       big5.o $(LDFLAGS)

depend dep:
	$(CC) -MM $(CFLAGS) *.c >depend

clean: 
	rm -f SUBSYS.o $(OBJS)

ifeq (depend,$(wildcard depend))
include depend
endif

