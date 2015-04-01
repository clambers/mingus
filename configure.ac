AC_PREREQ([2.69])

AC_INIT([Mingus], [1.0], [https://github.com/clambers/mingus/issues], [], [https://github.com/clambers/mingus])
AC_CONFIG_SRCDIR([mingus/mingus.h])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([1.14 foreign -Wall -Wno-portability -Werror])
AM_SILENT_RULES([yes])
AM_PROG_AR

LT_PREREQ([2.4.2])
LT_INIT([disable-static])

AC_PROG_CC

PKG_CHECK_MODULES([GLib], [glib-2.0 >= 2.40.2 gobject-2.0 >= 2.40.2])

GOBJECT_INTROSPECTION_CHECK([1.40.0])
GLIB_TESTS
GTK_DOC_CHECK([1.20], [--flavour no-tmpl])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
    Makefile
    mingus.pc
    mingus/Makefile
    tests/Makefile
    doc/Makefile
])

AC_OUTPUT
