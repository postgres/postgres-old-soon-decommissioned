#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for port/nextstep
#
# IDENTIFICATION
#    $PostgreSQL$
#
#-------------------------------------------------------------------------

subdir = src/backend/port/nextstep
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global

OBJS = dynloader.o port.o

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
