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

INCLUDE_OPT = -I.. 

CFLAGS+=$(INCLUDE_OPT)

OBJS = bit.o fstack.o hasht.o lispsort.o stringinfo.o dllist.o

all: SUBSYS.o

SUBSYS.o: $(OBJS)
	$(LD) $(LDREL) $(LDOUT) SUBSYS.o $(OBJS)

depend dep:
	$(CC) -MM $(INCLUDE_OPT) *.c >depend

clean: 
	rm -f SUBSYS.o $(OBJS) 

ifeq (depend,$(wildcard depend))
include depend
endif

