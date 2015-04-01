ACLOCAL_AMFLAGS = -I m4
AM_MAKEFLAGS = --no-print-directory
SUBDIRS = mingus tests
DISTCHECK_CONFIGURE_FLAGS = --enable-introspection
EXTRA_DIST = $(srcdir)/autogen.sh

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = mingus.pc
