#-------------------------------------------------------------------------
#
# Makefile
#    Makefile for pgeasy examples
#
# IDENTIFICATION
#    $Header$
#
#-------------------------------------------------------------------------

CFLAGS=-I/usr/local/pgsql/include
TARGET = pginsert pgwordcount pgnulltest pgmultiresult
LDFLAGS = -L/usr/local/pgsql/lib -lpgeasy

all : $(TARGET)

%: %.c
	gcc -o $@ $(CFLAGS) $@.c $(PGEASY) $(LDFLAGS)

clean:
	rm -f *.o $(TARGET) log core

