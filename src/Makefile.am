AM_CFLAGS = $(VARNISHAPI_CFLAGS) -Wall -Werror
AM_LDFLAGS = $(VARNISHAPI_LIBS) $(VMOD_LDFLAGS)

vmod_LTLIBRARIES = libvmod_mlock.la

libvmod_mlock_la_SOURCES = \
	vmod_mlock.c

nodist_libvmod_mlock_la_SOURCES = \
	vcc_mlock_if.c \
	vcc_mlock_if.h

dist_man_MANS = vmod_mlock.3

@BUILD_VMOD_MLOCK@

EXTRA_DIST = \
	vmod_mlock.vcc
