#include <anjay/anjay.h>
#include <anjay/security.h>
#include <anjay/server.h>
#include <avsystem/commons/avs_log.h>
#include <config_wisun.h>
#include <device.h>
#include <time.h>

anjay_t *anjay;
char *host;

// Installs Security Object and adds and instance of it.
// An instance of Security Object provides information needed to connect to
// LwM2M server.
static int setup_security_object(anjay_t *anjay) {
    if (anjay_security_object_install(anjay)) {
        return -1;
    }

    static const char PSK_IDENTITY[] = "identity";
    static const char PSK_KEY[] = "P4s$w0rd";

    anjay_security_instance_t security_instance = {
        .ssid = 1,
        .server_uri = host,
        .security_mode = ANJAY_SECURITY_NOSEC,
        .public_cert_or_psk_identity = (const uint8_t *) PSK_IDENTITY,
        .public_cert_or_psk_identity_size = strlen(PSK_IDENTITY),
        .private_cert_or_psk_key = (const uint8_t *) PSK_KEY,
        .private_cert_or_psk_key_size = strlen(PSK_KEY)
    };

    // Anjay will assign Instance ID automatically
    anjay_iid_t security_instance_id = ANJAY_ID_INVALID;
    if (anjay_security_object_add_instance(anjay, &security_instance,
                                           &security_instance_id)) {
        return -1;
    }

    return 0;
}

// Installs Server Object and adds and instance of it.
// An instance of Server Object provides the data related to a LwM2M Server.
static int setup_server_object(anjay_t *anjay) {
    if (anjay_server_object_install(anjay)) {
        return -1;
    }

    const anjay_server_instance_t server_instance = {
        // Server Short ID
        .ssid = 1,
        // Client will send Update message often than every 60 seconds
        .lifetime = 60,
        // Disable Default Minimum Period resource
        .default_min_period = -1,
        // Disable Default Maximum Period resource
        .default_max_period = -1,
        // Disable Disable Timeout resource
        .disable_timeout = -1,
        // Sets preferred transport to UDP
        .binding = "U"
    };

    // Anjay will assign Instance ID automatically
    anjay_iid_t server_instance_id = ANJAY_ID_INVALID;
    if (anjay_server_object_add_instance(anjay, &server_instance,
                                         &server_instance_id)) {
        return -1;
    }

    return 0;
}

int main(int argc, char *argv[]){
	if (argc != 3) {
        avs_log(tutorial, ERROR, "usage: %s ENDPOINT_NAME HOST:PORT", argv[0]);
        return -1;
    }
    	host = argv[2];


	const anjay_configuration_t CONFIG = {
	        .endpoint_name = argv[1],
			.in_buffer_size = 2048,
			.out_buffer_size = 2048,
			.msg_cache_size = 2048
	};
	anjay = anjay_new(&CONFIG);
	if (!anjay) {
		avs_log(tutorial, ERROR, "Could not create Anjay object");
		return -1;
	}

	int result = 0;
	// Setup necessary objects
	if (setup_security_object(anjay) || setup_server_object(anjay)) {
		avs_log(tutorial, ERROR, "Could not create Anjay object");
		result = -1;
	}

	const anjay_dm_object_def_t **time_object = NULL;
	if (!result) {
		time_object = time_object_create();
		if (time_object) {
			result = anjay_register_object(anjay, time_object);
		} else {
			result = -1;
		}
	}

	const anjay_dm_object_def_t **device_object = NULL;
	if (!result) {
		device_object = device_object_create();
		if (device_object) {
			result = anjay_register_object(anjay, device_object);
		} else {
			result = -1;
		}
	}

	const anjay_dm_object_def_t **config_wisun = NULL;
	if (!result) {
		config_wisun = configuracao_wi_sun_object_create();
		if (config_wisun) {
			result = anjay_register_object(anjay, config_wisun);
		} else {
			result = -1;
		}
	}

	if (!result) {
        result = anjay_event_loop_run(
                anjay, avs_time_duration_from_scalar(1, AVS_TIME_S));
    }

    anjay_delete(anjay);
    return result;
}
