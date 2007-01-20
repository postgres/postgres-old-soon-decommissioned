#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for storage/freespace
#
# IDENTIFICATION
#    $PostgreSQL$
#
#-------------------------------------------------------------------------

subdir = src/backend/storage/freespace
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global

OBJS = freespace.o

all: SUBSYS.o

SUBSYS.o: $(OBJS)
	$(LD) $(LDREL) $(LDOUT) SUBSYS.o $(OBJS)

clean: 
	rm -f SUBSYS.o $(OBJS)
