#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for port/ultrix (Ultrix4.x specific stuff)
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

CFLAGS+= -DNEED_ISINF -DUSE_POSIX_TIME

LDADD+= -ldl -lln

#
# The YACC grammar is too big..
#
#.if !defined(CDEBUG)
#CFLAGS+= -Olimit 2000
#.endif

HEADERS+= dl.h machine.h port-protos.h

SUBSRCS+= dynloader.c port.c strdup.c
