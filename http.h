#ifndef _HTTP_H_INCLUDED_
# define _HTTP_H_INCLUDED_

#include <stdarg.h>
#include "mongoose.h"
#include "storage.h"
#include "json.h"

#define API_PREFIX	"/api/0/"
#define MONITOR_URI	"/api/0/monitor"

typedef enum {
	PAGE = 0,
	GEODATA = 1,
	LASTPOS = 2,
} viewtype;

int ev_handler(struct mg_connection *conn, enum mg_event ev);
void http_ws_push_json(struct mg_server *server, JsonNode *obj);

#endif
