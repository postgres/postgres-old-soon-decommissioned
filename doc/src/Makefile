# Postgres documentation makefile
# $PostgreSQL$

subdir = doc/src
top_builddir = ../..
include $(top_builddir)/src/Makefile.global

clean distclean maintainer-clean:
	rm -f *.tar *.gz
	$(MAKE) -C sgml $@

# Build twice to resolve index entries
postgres.tar:
	$(MAKE) -C sgml clean
	$(MAKE) -C sgml html
	$(MAKE) -C sgml html JADEFLAGS='-V html-manifest'
	cd sgml && $(TAR) -cf ../$@ `cat HTML.manifest` `echo *.gif | grep -v '\*'` *.css

man.tar:
	$(MAKE) -C sgml man
	$(TAR) -cf $@ -C sgml man1 man$(sqlmansect_dummy)
