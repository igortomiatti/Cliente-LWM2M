#ifndef CONFIG_WISUN_H
#define CONFIG_WISUN_H

#include <anjay/anjay.h>

const anjay_dm_object_def_t **configuracao_wi_sun_object_create(void);
void configuracao_wi_sun_object_release(const anjay_dm_object_def_t **def);

#endif // DEVICE_OBJECT_H
