#ifndef __LIBINSANE_GOBJECT_CONSTRAINT_TYPE
#define __LIBINSANE_GOBJECT_CONSTRAINT_TYPE

#include <glib-object.h>

G_BEGIN_DECLS

typedef enum
{
	LIBINSANE_CONSTRAINT_TYPE_NONE,
	LIBINSANE_CONSTRAINT_TYPE_RANGE,
	LIBINSANE_CONSTRAINT_TYPE_LIST,
} LibinsaneConstraintType;

G_END_DECLS

#endif
