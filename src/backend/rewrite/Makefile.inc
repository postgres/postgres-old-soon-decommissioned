#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for the rewrite rules module
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

VPATH:= $(VPATH):$(CURDIR)/rewrite


SRCS_REWRITE= rewriteRemove.c rewriteDefine.c \
	 rewriteHandler.c rewriteManip.c rewriteSupport.c locks.c

HEADERS+= rewriteRemove.h rewriteDefine.h rewriteHandler.h \
	rewriteManip.h rewriteSupport.h locks.h prs2lock.h

