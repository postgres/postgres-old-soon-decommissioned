#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for tutorial
#
# IDENTIFICATION
#    $PostgreSQL$
#
#-------------------------------------------------------------------------

subdir = src/tutorial
top_builddir = ../..
include $(top_builddir)/src/Makefile.global

override CFLAGS+= $(CFLAGS_SL)
SHLIB_LINK = $(BE_DLLLIBS)

#
# DLOBJS are the dynamically-loaded object files.  The "funcs" queries
# include CREATE FUNCTIONs that load routines from these files.
#
DLOBJS= complex$(DLSUFFIX) funcs$(DLSUFFIX)

QUERIES= advanced.sql basics.sql complex.sql funcs.sql syscat.sql

all: $(DLOBJS) $(QUERIES)

%.sql: %.source
	rm -f $@; \
	C=`pwd`; \
	sed -e "s:_OBJWD_:$$C:g" < $< > $@

clean distclean maintainer-clean:
	rm -f $(DLOBJS) $(QUERIES)
