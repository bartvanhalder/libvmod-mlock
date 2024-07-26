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

AM_TESTS_ENVIRONMENT = \
	PATH="$(VMOD_TEST_PATH)" \
	LD_LIBRARY_PATH="$(VARNISH_LIBRARY_PATH)"
TEST_EXTENSIONS = .vtc
VTC_LOG_COMPILER = varnishtest -v
AM_VTC_LOG_FLAGS = -Dvmod_mlock="$(VMOD_MLOCK)"

TESTS = @VMOD_TESTS@

EXTRA_DIST = \
	vmod_mlock.vcc \
	$(VMOD_TESTS)
