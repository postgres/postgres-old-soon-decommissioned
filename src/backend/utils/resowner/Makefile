#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for utils/resowner
#
# IDENTIFICATION
#    $PostgreSQL$
#
#-------------------------------------------------------------------------

subdir = src/backend/utils/resowner
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global

OBJS = resowner.o

all: SUBSYS.o

SUBSYS.o: $(OBJS)
	$(LD) $(LDREL) $(LDOUT) SUBSYS.o $(OBJS)

clean: 
	rm -f SUBSYS.o $(OBJS)
