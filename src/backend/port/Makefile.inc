#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for the port module (for code specific to various UNIX 
#    platforms)
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

portdir= $(CURDIR)/port/$(PORTNAME)
VPATH:= $(VPATH):$(portdir)

SUBSRCS=
include $(portdir)/Makefile.inc
SRCS_PORT:= $(SUBSRCS)

