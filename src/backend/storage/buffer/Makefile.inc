#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for storage/buffer
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SUBSRCS+= buf_table.c buf_init.c bufmgr.c freelist.c localbuf.c

SRCS_SITEMGR+= buf_table.c buf_init.c freelist.c
