#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for utils/misc
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR = ../../..
include ../../../Makefile.global

OBJS = database.o superuser.o guc.o guc-file.o

all: SUBSYS.o

SUBSYS.o: $(OBJS)
	$(LD) $(LDREL) $(LDOUT) SUBSYS.o $(OBJS)

.SECONDARY: guc-file.c
.INTERMEDIATE: lex.yy.c

guc-file.c: lex.yy.c
	sed -e 's/lex\.yy\.c/guc-file\.c/g' \
	    -e 's/^yy/GUC_yy/g' \
	    -e 's/\([^a-zA-Z0-9_]\)yy/\1GUC_yy/g' < $< > $@

lex.yy.c: guc-file.l
	$(LEX) $(LFLAGS) $<


depend dep:
	$(CC) -MM $(CFLAGS) *.c >depend

clean: 
	rm -f SUBSYS.o $(OBJS) lex.yy.c

ifeq (depend,$(wildcard depend))
include depend
endif
