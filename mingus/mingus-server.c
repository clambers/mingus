#include "mingus-server.h"
#include "mingus-server-private.h"

G_DEFINE_TYPE_WITH_PRIVATE(MingusServer, mingus_server, G_TYPE_OBJECT)

static void mingus_server_dispose(GObject *gobject) {
  MingusServer *self;

  self = MINGUS_SERVER(gobject);

  G_OBJECT_CLASS(mingus_server_parent_class)->dispose(gobject);
}

static void mingus_server_finalize(GObject *gobject) {
  MingusServer *self;

  self = MINGUS_SERVER(gobject);

  G_OBJECT_CLASS(mingus_server_parent_class)->finalize(gobject);
}

static void mingus_server_class_init(MingusServerClass *klass) {
  GObjectClass *gobject_class;

  gobject_class = G_OBJECT_CLASS(klass);

  gobject_class->dispose = mingus_server_dispose;
  gobject_class->finalize = mingus_server_finalize;
}

static void mingus_server_init(MingusServer *self) {
  MingusServerPrivate *priv;

  priv = mingus_server_get_instance_private(self);

  priv->handle = 42;
}

MingusServer *mingus_server_new(void) {
  return g_object_new(MINGUS_TYPE_SERVER, NULL);
}
