#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for port/sunos4
#
# IDENTIFICATION
#    $PostgreSQL$
#
#-------------------------------------------------------------------------

subdir = src/backend/port/sunos4
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global

OBJS = strtol.o

all: SUBSYS.o

SUBSYS.o: $(OBJS)
	$(LD) $(LDREL) $(LDOUT) SUBSYS.o $(OBJS)

clean: 
	rm -f SUBSYS.o $(OBJS)
