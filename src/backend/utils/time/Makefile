#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for utils/time
#
# IDENTIFICATION
#    $PostgreSQL$
#
#-------------------------------------------------------------------------

subdir = src/backend/utils/time
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global

OBJS = combocid.o tqual.o

all: SUBSYS.o

SUBSYS.o: $(OBJS)
	$(LD) $(LDREL) $(LDOUT) SUBSYS.o $(OBJS)

clean:
	rm -f SUBSYS.o $(OBJS)
