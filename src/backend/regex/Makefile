#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for regex
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR = ../..
include ../../Makefile.global

CFLAGS += -I..
CFLAGS += -DPOSIX_MISTAKE 

OBJS = regcomp.o regerror.o regexec.o regfree.o
ifdef MULTIBYTE
CFLAGS+= $(MBFLAGS)
endif

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

