#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for lib (miscellaneous stuff)
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR = ../..
include ../../Makefile.global

OBJS = bit.o hasht.o lispsort.o stringinfo.o dllist.o

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

