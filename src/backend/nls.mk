# $Header$
CATALOG_NAME	:= postgres
AVAIL_LANGUAGES	:= cs de es fr hr hu it nb pt_BR ru sv tr zh_CN zh_TW
GETTEXT_FILES	:= + gettext-files
GETTEXT_TRIGGERS:= errmsg errdetail errhint errcontext postmaster_error yyerror

gettext-files: distprep
	find $(srcdir)/ -name '*.c' -print >$@

my-maintainer-clean:
	rm -f gettext-files

.PHONY: my-maintainer-clean
maintainer-clean: my-maintainer-clean
