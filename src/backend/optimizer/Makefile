#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for optimizer
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

all: SUBSYS.o

SUBSYS.o: 
	$(MAKE) -C path SUBSYS.o
	$(MAKE) -C plan SUBSYS.o
	$(MAKE) -C prep SUBSYS.o
	$(MAKE) -C util SUBSYS.o
	$(LD) -r -o SUBSYS.o \
	     path/SUBSYS.o plan/SUBSYS.o prep/SUBSYS.o util/SUBSYS.o 

clean:
	rm -f SUBSYS.o
	$(MAKE) -C path clean
	$(MAKE) -C plan clean
	$(MAKE) -C prep clean
	$(MAKE) -C util clean

.DEFAULT: 
	$(MAKE) -C path $@
	$(MAKE) -C plan $@
	$(MAKE) -C prep $@
	$(MAKE) -C util $@
