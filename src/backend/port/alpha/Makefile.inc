#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for port/alpha (Alpha OSF/1 specific stuff)
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

LDADD+= -lln

#
# The YACC grammar is too big..
#
#.if !defined(CDEBUG)
##CFLAGS+= -Olimit 2000
#.endif

HEADERS+= machine.h port-protos.h

SUBSRCS= port.c
