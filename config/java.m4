#
# Autoconf macros for configuring the build of Java JDBC Tools
#
# $Header$
#

# PGAC_PATH_ANT
# -------------
# Look for the ANT tool and set the output variable 'ANT' to 'ant'
# if found, empty otherwise
AC_DEFUN([PGAC_PATH_ANT],
         [AC_PATH_PROGS(ANT, [ant ant.sh ant.bat])])
