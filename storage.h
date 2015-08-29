#ifndef _STORAGE_H_INCL_
# define _STORAGE_H_INCL_

#include <time.h>
#include "json.h"

typedef enum {
	GEOJSON = 0,
	CSV,
	JSON,
	RAW,
} output_type;

JsonNode *lister(char *username, char *device, time_t s_lo, time_t s_hi);
void locations(char *filename, JsonNode *obj, JsonNode *arr, time_t s_lo, time_t s_hi, int rawmode);
void reverse_locations(char *filename, JsonNode *obj, JsonNode *arr, time_t s_lo, time_t s_hi, int rawmode, int limit);
int make_times(char *time_from, time_t *s_lo, char *time_to, time_t *s_to);
JsonNode *geo_json(JsonNode *json);
JsonNode *kill_datastore(char *username, char *device);
JsonNode *last_users();

#endif
