#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for port/sparc (SPARC/SunOS 4 specific stuff)
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

LDADD+= -lln -ldl

#
# SunOS 4 strtol is broken -- doesn't report overflow using errno.
#
SUBSRCS= strtol.c

HEADERS+= float.h machine.h port-protos.h
