#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for access/gin
#
# IDENTIFICATION
#    $PostgreSQL$
#
#-------------------------------------------------------------------------

subdir = src/backend/access/gin
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global

OBJS = ginutil.o gininsert.o ginxlog.o ginentrypage.o gindatapage.o \
	ginbtree.o ginscan.o ginget.o ginvacuum.o ginarrayproc.o \
	ginbulk.o

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
