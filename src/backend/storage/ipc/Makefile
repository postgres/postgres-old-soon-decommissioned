#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for storage/ipc
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR = ../../..
include ../../../Makefile.global

CFLAGS += -I../..

OBJS = ipc.o ipci.o shmem.o shmqueue.o sinval.o \
       sinvaladt.o spin.o

all: SUBSYS.o

SUBSYS.o: $(OBJS)
	$(LD) -r -o SUBSYS.o $(OBJS)

depend dep:
	$(CC) -MM $(CFLAGS) *.c >depend

clean: 
	rm -f SUBSYS.o $(OBJS)

ifeq (depend,$(wildcard depend))
include depend
endif

