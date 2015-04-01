include $(top_srcdir)/m4/glib-tap.mk

AM_CPPFLAGS = \
	-I$(top_srcdir) \
	-I$(top_builddir) \
	-I$(top_srcdir)/mingus \
	-I$(top_builddir)/mingus \
	@GLib_CFLAGS@

LDADD = \
	$(top_builddir)/mingus/libmingus.la \
	@GLib_LIBS@

test_programs = basic
