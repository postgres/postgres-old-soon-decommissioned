#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for commands
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR = ../..
include ../../Makefile.global

INCLUDE_OPT = -I.. \
              -I../port/$(PORTNAME) \
              -I../../include

CFLAGS+=$(INCLUDE_OPT)

OBJS = async.o creatinh.o command.o copy.o defind.o define.o \
       remove.o rename.o vacuum.o version.o view.o cluster.o \
       recipe.o explain.o sequence.o trigger.o user.o proclang.o dbcommands.o

all: SUBSYS.o

SUBSYS.o: $(OBJS)
	$(LD) -r -o SUBSYS.o $(OBJS)

depend dep:
	$(CC) -MM $(INCLUDE_OPT) *.c >depend

clean: 
	rm -f SUBSYS.o $(OBJS) 

ifeq (depend,$(wildcard depend))
include depend
endif

