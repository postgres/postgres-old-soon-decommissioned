#-------------------------------------------------------------------------
#
# Makefile.inc--
#    Makefile for the commands module
#
# Copyright (c) 1994, Regents of the University of California
#
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

VPATH:=$(VPATH):$(CURDIR)/commands


SRCS_COMMANDS= async.c creatinh.c command.c copy.c defind.c define.c \
	purge.c remove.c rename.c vacuum.c version.c view.c cluster.c \
	recipe.c explain.c

HEADERS+= async.h command.h copy.h creatinh.h defrem.h purge.h \
	rename.h vacuum.h version.h view.h cluster.h \
	recipe.h


