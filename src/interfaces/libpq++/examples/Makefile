#-------------------------------------------------------------------------
#
# Makefile for libpq++ examples
#
# Portions Copyright (c) 1996-2001, PostgreSQL Global Development Group
# Portions Copyright (c) 1994, Regents of the University of California
#
# $Header$
#
#-------------------------------------------------------------------------

subdir = src/interfaces/libpq++/examples
top_builddir = ../../../..
include $(top_builddir)/src/Makefile.global

LIBNAME= libpq++
HEADERDIR= $(includedir)
LIBPQDIR= $(libdir)

CXXFLAGS= $(CFLAGS)

CXXFLAGS+= -I$(HEADERDIR)

LDFLAGS+= -L$(LIBPQDIR) -lpq++ 

PROGS=	testlibpq0 testlibpq1 testlibpq2 testlibpq3 \
	testlibpq4 testlibpq5 testlibpq6 testlo

all: $(PROGS)

$(PROGS): % : %.cc
	$(CXX) $(CXXFLAGS) -o $@ $@.cc $(LDFLAGS)

.PHONY: submake

clean: 
	rm -f $(PROGS)

