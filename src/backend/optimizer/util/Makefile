#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for optimizer/util
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR = ../../..
include ../../../Makefile.global

OBJS = restrictinfo.o clauses.o indexnode.o plancat.o \
       joininfo.o pathnode.o relnode.o tlist.o var.o

# not ready yet: predmig.o xfunc.o

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

