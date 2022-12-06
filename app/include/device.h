#ifndef DEVICE_OBJECT_H
#define DEVICE_OBJECT_H

#include <anjay/anjay.h>

#define MANUFACTURER "Lactec"
#define MODEL_NUMBER "HW1"
#define FIRMWARE_VERSION "1.0"

const anjay_dm_object_def_t **device_object_create(void);
void device_object_release(const anjay_dm_object_def_t **def);

#endif // DEVICE_OBJECT_H
