#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for tcop
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR= ../..
include $(SRCDIR)/Makefile.global

ifeq ($(CC), gcc)
CFLAGS+= -Wno-error
endif

OBJS= dest.o fastpath.o postgres.o pquery.o utility.o

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

