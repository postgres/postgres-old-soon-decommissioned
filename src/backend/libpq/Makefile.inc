#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for the (backend side) libpq module
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

#
# The frontend libpq interfaces to the backend through these files.
#
VPATH:= $(VPATH):$(CURDIR)/libpq

SRCS_LIBPQ= be-dumpdata.c be-fsstubs.c be-pqexec.c

#
# These files are shared with the frontend library.
#
SRCS_LIBPQ+= auth.c pqcomm.c portal.c portalbuf.c pqpacket.c pqsignal.c

HEADERS+= auth.h be-fsstubs.h libpq-be.h libpq-fs.h libpq.h pqcomm.h pqsignal.h
