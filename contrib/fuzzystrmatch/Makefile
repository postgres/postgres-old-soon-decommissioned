# $PostgreSQL$

subdir = contrib/fuzzystrmatch
top_builddir = ../..
include $(top_builddir)/src/Makefile.global

MODULE_big = fuzzystrmatch
SRCS += fuzzystrmatch.c dmetaphone.c
OBJS = $(SRCS:.c=.o)
DATA_built = fuzzystrmatch.sql
DOCS = README.fuzzystrmatch README.soundex

include $(top_srcdir)/contrib/contrib-global.mk
