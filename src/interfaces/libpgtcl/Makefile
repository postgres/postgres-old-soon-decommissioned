#-------------------------------------------------------------------------
#
# Makefile
#    Makefile for libpgtcl library
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

LIB=	pgtcl

MKDIR=	../mk
include $(MKDIR)/postgres.mk

CFLAGS+= -I$(HEADERDIR) \
	 -I$(srcdir)/backend/include \
	 -I$(srcdir)/backend \
	 -I$(CURDIR) \
	 -I$(TCL_INCDIR)

ifdef KRBVERS
CFLAGS+= $(KRBFLAGS)
endif

LIBSRCS= pgtcl.c pgtclCmds.c pgtclId.c

install-headers:
	$(INSTALL) $(INSTLOPTS) libpgtcl.h $(HEADERDIR)/libpgtcl.h


install:: install-headers

include $(MKDIR)/postgres.lib.mk

