# Prelude
AC_INIT([synth8ic], [0.1], [sven@netmonk.org])
AC_PREREQ([2.65])
AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_AUX_DIR([build-aux])
AM_INIT_AUTOMAKE([-Wall -Werror])

# Check for programs
AC_PROG_CC
AC_PROG_SED
AC_CHECK_PROGS([TAR], [tar gtar], [:])
if test  "$TAR" = :; then
	AC_MSG_ERROR([This package needs tar.], [1])
fi
AC_MSG_WARN([This is just a warning test...])
AC_DEFINE([FOO], [3.14], [This is just a macro define test])
AC_SUBST([BAR], [21.297])

# Check for libraries

# Output files
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT 
