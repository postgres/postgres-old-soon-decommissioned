#!/bin/sh
#
# $Header$
#
PATH=_fUnKy_IPCCLEANPATH_sTuFf_:$PATH
export PATH
ipcs | egrep '^m .*|^s .*' | egrep "`whoami`|postgres" | \
awk '{printf "ipcrm -%s %s\n", $1, $2}' '-' | sh
