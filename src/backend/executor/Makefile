#-------------------------------------------------------------------------
#
# Makefile--
#    Makefile for executor
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

SRCDIR = ../..
include ../../Makefile.global

INCLUDE_OPT = -I.. 

CFLAGS+=$(INCLUDE_OPT)

OBJS = execAmi.o execFlatten.o execJunk.o execMain.o \
       execProcnode.o execQual.o execScan.o execTuples.o \
       execUtils.o functions.o nodeAppend.o nodeAgg.o nodeHash.o \
       nodeHashjoin.o nodeIndexscan.o nodeMaterial.o nodeMergejoin.o \
       nodeNestloop.o nodeResult.o nodeSeqscan.o nodeSort.o \
       nodeUnique.o nodeTee.o nodeGroup.o spi.o nodeSubplan.o

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

