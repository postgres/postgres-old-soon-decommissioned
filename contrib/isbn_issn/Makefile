#
#	PostgreSQL types for ISBN and ISSN identifiers.
#
#	$Id$

SRCDIR= ../../src

include $(SRCDIR)/Makefile.global

CFLAGS+= $(CFLAGS_SL)

all: isbn$(DLSUFFIX) issn$(DLSUFFIX)

install: isbn$(DLSUFFIX) issn$(DLSUFFIX)
	install -c isbn$(DLSUFFIX) issn$(DLSUFFIX) /usr/local/pgsql/modules

clean:
	rm -f isbn$(DLSUFFIX) issn$(DLSUFFIX) *.o
