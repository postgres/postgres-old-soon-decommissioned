#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for src/bin (utility programs)
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

MKDIR=../mk
-include $(MKDIR)/../Makefile.global

#
# C programs
#
SUBDIR=  monitor pg_id pg_version psql pg_dump

#
# Shell scripts
# 
SUBDIR+= cleardbdir createdb createuser destroydb destroyuser initdb 

#
# TCL/TK programs
#
ifeq ($(USE_TCL), true)
SUBDIR += pgtclsh
endif

include $(MKDIR)/postgres.subdir.mk

