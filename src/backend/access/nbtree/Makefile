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

INCLUDE_OPT = -I../.. 

ifdef PORTNAME
INCLUDE_OPT += -I../../port/$(PORTNAME) 
endif 

CFLAGS += $(INCLUDE_OPT)

OBJS = nbtcompare.o nbtinsert.o nbtpage.o nbtree.o nbtscan.o nbtsearch.o \
       nbtstrat.o nbtutils.o nbtsort.o

all: SUBSYS.o

SUBSYS.o: $(OBJS)
	$(LD) -r -o SUBSYS.o $(OBJS)

depend dep:
	$(CC) -MM $(INCLUDE_OPT) *.c >depend

clean: 
	rm -f SUBSYS.o $(OBJS)

ifeq (depend,$(wildcard depend))
include depend
endif

