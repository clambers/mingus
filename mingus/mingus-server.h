#ifndef __MINGUS_SERVER_H__
#define __MINGUS_SERVER_H__

#include <glib-object.h>

#define MINGUS_TYPE_SERVER (mingus_server_get_type())

#define MINGUS_SERVER(obj)                      \
  (G_TYPE_CHECK_INSTANCE_CAST                   \
   ((obj),                                      \
    MINGUS_TYPE_SERVER,                         \
    MingusServer))
#define MINGUS_IS_SERVER(obj)                   \
  (G_TYPE_CHECK_INSTANCE_TYPE                   \
   ((obj),                                      \
    MINGUS_TYPE_SERVER))
#define MINGUS_SERVER_CLASS(klass)              \
  (G_TYPE_CHECK_CLASS_CAST                      \
   ((klass),                                    \
    MINGUS_TYPE_SERVER,                         \
    MingusServerClass))
#define MINGUS_IS_SERVER_CLASS(klass)           \
  (G_TYPE_CHECK_CLASS_TYPE                      \
   ((klass),                                    \
    MINGUS_TYPE_SERVER))
#define MINGUS_SERVER_GET_CLASS(obj)            \
  (G_TYPE_INSTANCE_GET_CLASS                    \
   ((obj),                                      \
    MINGUS_TYPE_SERVER,                         \
    MingusServerClass))

typedef struct _MingusServer MingusServer;
typedef struct _MingusServerClass MingusServerClass;

struct _MingusServer {
  GObject parent_instance;
};

struct _MingusServerClass {
  GObjectClass parent_class;
};

GType mingus_server_get_type(void);

MingusServer *mingus_server_new(void);

#endif
