# $Header$

subdir = src/bin/pg_passwd
top_builddir = ../../..
include $(top_builddir)/src/Makefile.global

OBJS = pg_passwd.o
ifdef STRDUP
OBJS += $(top_builddir)/src/utils/strdup.o
endif

all: pg_passwd

pg_passwd: $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $^ $(LIBS) -o $@

$(top_builddir)/src/utils/strdup.o:
	$(MAKE) -C $(top_builddir)/src/utils strdup.o

install: all installdirs
	$(INSTALL_PROGRAM) pg_passwd$(X) $(DESTDIR)$(bindir)/pg_passwd$(X)

installdirs:
	$(mkinstalldirs) $(DESTDIR)$(bindir)

uninstall:
	rm -f $(DESTDIR)$(bindir)/pg_passwd$(X)

depend dep:
	$(CC) -MM $(CFLAGS) *.c >depend

clean distclean maintainer-clean:
	rm -f pg_passwd$(X) pg_passwd.o

ifeq (depend,$(wildcard depend))
include depend
endif
