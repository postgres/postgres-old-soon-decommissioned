# $Header$

SRCDIR= ../../src

include $(SRCDIR)/Makefile.global

CONTRIBDIR=$(LIBDIR)/contrib

CFLAGS+= -I$(LIBPQDIR)

TARGETS= vacuumlo
CLEANFILES+= $(TARGETS)
CURDIR=`pwd`

all:: $(TARGETS)

$(TARGETS): vacuumlo.o
	$(CC) -o vacuumlo -L $(LIBDIR) -lpq -lcrypt vacuumlo.o

clean: 
	rm -f $(TARGETS) *.o

dist:
	tar cf vacuumlo.tar README Makefile vacuumlo.c
