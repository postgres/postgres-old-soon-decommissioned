#!/bin/sh
#
# $Header$
#
PATH=PG_OPT_IPCCLEANPATH_PARAM:$PATH
export PATH
ipcs | egrep '^m .*|^s .*' | egrep "`whoami`|postgres" | \
awk '{printf "ipcrm -%s %s\n", $1, $2}' '-' | sh
