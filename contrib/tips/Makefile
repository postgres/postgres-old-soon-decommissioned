#
# $Header$
#

TOPDIR=../..

include ../Makefile.global

NAME	= 

PROGRAM	= 
OBJS	= 
DOCS	= README.apachelog
SQLS	= 
BINS	=
EXAMPLES=
MODS	= 

all::

install: install_doc 

install_doc:
	$(TOPDIR)/config/mkinstalldirs $(CONTRIB_DOCDIR)/tips
	for inst_file in $(DOCS); do \
		$(INSTALL) $(INSTL_LIB_OPTS) $$inst_file $(CONTRIB_DOCDIR)/tips; \
	done

clean:
	$(RM) *~ 

