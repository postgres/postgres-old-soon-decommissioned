#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for nodes
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR = ../..
include ../../Makefile.global

INCLUDE_OPT = -I../port/$(PORTNAME) \
              -I../../include

CFLAGS+=$(INCLUDE_OPT)

OBJS = nodeFuncs.o nodes.o list.o \
       copyfuncs.o equalfuncs.o makefuncs.o outfuncs.o readfuncs.o \
       print.o read.o

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

