#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for port/sparc_solaris (SPARC/Solaris 2.x specific stuff)
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

LDADD+= -ll -ldl

SUBSRCS+= port.c tas.s

HEADERS+= machine.h port-protos.h rusagestub.h
