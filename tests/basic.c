#include <config.h>
#include <mingus-server.h>
#include <glib.h>

typedef struct {
  MingusServer *obj;
} ServerFixture;

static void server_fixture_setup(ServerFixture *f, gconstpointer ud) {
  f->obj = mingus_server_new();
}

static void server_fixture_teardown(ServerFixture *f, gconstpointer ud) {
  g_clear_object(&f->obj);
}

static void test_server_basic(ServerFixture *f, gconstpointer ud) {
  g_assert_cmpint(0, ==, 0);
}

int main(int argc, char *argv[]) {
  g_test_init(&argc, &argv, NULL);

  g_test_bug_base(PACKAGE_BUGREPORT);

  g_test_add("/server/basic", ServerFixture, NULL, server_fixture_setup,
             test_server_basic, server_fixture_teardown);

  return g_test_run();
}
