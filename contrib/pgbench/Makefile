# $Header$

SRCDIR= ../../src

include $(SRCDIR)/Makefile.global

CFLAGS:= -I$(LIBPQDIR) $(CFLAGS)

TARGET = pgbench
OBJS = pgbench.o

all:: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) -L$(LIBPQDIR) -lpq $(LDFLAGS)

install: $(TARGET)
	$(INSTALL) $(INSTL_EXE_OPTS) $(TARGET)$(X) $(BINDIR)/$(TARGET)$(X)

clean:
	$(RM) $(TARGET)$(X) $(OBJS)

distclean: clean
