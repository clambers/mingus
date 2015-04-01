SOURCE_H = mingus-server.h
PRIVATE_H = mingus-server-private.h
SOURCE_C = mingus-server.c

include_HEADERS = mingus.h

subincludedir = $(includedir)/mingus
subinclude_HEADERS = $(SOURCE_H)

lib_LTLIBRARIES = libmingus.la
libmingus_la_SOURCES = $(SOURCE_H) $(PRIVATE_H) $(SOURCE_C)
libmingus_la_CFLAGS = @GLib_CFLAGS@
libmingus_la_LDFLAGS = -version 0:0:0
libmingus_la_LIBADD = @GLib_LIBS@

-include $(INTROSPECTION_MAKEFILE)
if HAVE_INTROSPECTION
INTROSPECTION_GIRS = Mingus-1.0.gir

Mingus-1.0.gir: libmingus.la Makefile
Mingus_1_0_gir_LIBS = libmingus.la
Mingus_1_0_gir_FILES = $(SOURCE_H) $(SOURCE_C)
Mingus_1_0_gir_INCLUDES = GObject-2.0
Mingus_1_0_gir_SCANNERFLAGS = --warn-all

girdir = $(datadir)/gir-1.0
dist_gir_DATA = Mingus-1.0.gir

typelibdir = $(libdir)/girepository-1.0
typelib_DATA = Mingus-1.0.typelib

CLEANFILES = $(dist_gir_DATA) $(typelibs_DATA)
endif
