#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for access/nbtree
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR = ../../..
include ../../../Makefile.global

CFLAGS += -I../.. 

OBJS = nbtcompare.o nbtinsert.o nbtpage.o nbtree.o nbtscan.o nbtsearch.o \
       nbtstrat.o nbtutils.o nbtsort.o

all: SUBSYS.o

SUBSYS.o: $(OBJS)
	$(LD) $(LDREL) $(LDOUT) SUBSYS.o $(OBJS)

depend dep:
	$(CC) -MM $(CFLAGS) *.c >depend

clean: 
	rm -f SUBSYS.o $(OBJS)

ifeq (depend,$(wildcard depend))
include depend
endif

