#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for the port-specific subsystem of the backend
#
# You must invoke this make file with the PORTNAME variable set to the
# name of a port, i.e. the name of a subdirectory of the current directory.
# Example: 
#
#    make SUBSYS.o PORTNAME=linux
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

ifndef PORTNAME
.DEFAULT all: 
	@echo "Error:  Must invoke make with PORTNAME= argument."
	@false
else

all: SUBSYS.o

SUBSYS.o: 
	$(MAKE) -C $(PORTNAME) SUBSYS.o
	cp $(PORTNAME)/SUBSYS.o .

clean:
	rm -f SUBSYS.o
	$(MAKE) -C $(PORTNAME) clean

.DEFAULT: 
	$(MAKE) -C $(PORTNAME) $@


endif
