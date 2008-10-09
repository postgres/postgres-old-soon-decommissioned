# $PostgreSQL$
CATALOG_NAME	:= plpgsql
AVAIL_LANGUAGES	:=
GETTEXT_FILES	:= pl_comp.c pl_exec.c pl_gram.c pl_funcs.c pl_handler.c pl_scan.c
GETTEXT_TRIGGERS:= _ errmsg errdetail errdetail_log errhint errcontext write_stderr yyerror

.PHONY: gettext-files
gettext-files: distprep
