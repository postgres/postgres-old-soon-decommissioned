#-------------------------------------------------------------------------
#
# Makefile.inc--
#    this makefile is only use for collecting HEADERS
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

VPATH:= $(VPATH):$(CURDIR)/include

HEADERS+= c.h libpq-fe.h miscadmin.h postgres.h
