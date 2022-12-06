/**
 * Generated by anjay_codegen.py on 2022-11-03 13:58:45
 *
 * LwM2M Object: Configuracao Wi-Sun
 * ID: 32769, URN: , Mandatory, Single
 *
 * DLMS Wi-SUN setup - class_id = 95, version 0.
 */
#include <assert.h>
#include <stdbool.h>

#include <anjay/anjay.h>
#include <avsystem/commons/avs_defs.h>
#include <avsystem/commons/avs_memory.h>

/**
 * Network Name: RW, Single, Optional
 * type: string, range: N/A, unit: N/A
 * Alguma descricao.
 */
#define RID_NETWORK_NAME 0

/**
 * PAN ID: RW, Single, Mandatory
 * type: integer, range: N/A, unit: N/A
 * Some description.
 */
#define RID_PAN_ID 1

/**
 * Discovery iMin: R, Single, Mandatory
 * type: integer, range: N/A, unit: N/A
 * Some description.
 */
#define RID_DISCOVERY_IMIN 2

/**
 * Discovery doublings: R, Single, Mandatory
 * type: integer, range: N/A, unit: N/A
 * Some description.
 */
#define RID_DISCOVERY_DOUBLINGS 3

/**
 * Broadcast timeout min: R, Single, Mandatory
 * type: integer, range: N/A, unit: N/A
 * Some description.
 */
#define RID_BROADCAST_TIMEOUT_MIN 4

/**
 * Broadcast timeout max (doublings): R, Single, Mandatory
 * type: integer, range: N/A, unit: N/A
 * Some description.
 */
#define RID_BROADCAST_TIMEOUT_MAX_DOUBLINGS 5

/**
 * RPL DIO minimum interval: R, Single, Mandatory
 * type: integer, range: N/A, unit: N/A
 * Some description.
 */
#define RID_RPL_DIO_MINIMUM_INTERVAL 6

/**
 * RPL DIO timeoutmax (doublings): R, Single, Mandatory
 * type: integer, range: N/A, unit: N/A
 * Some description.
 */
#define RID_RPL_DIO_TIMEOUTMAX_DOUBLINGS 7

/**
 * Channel plan: R, Single, Mandatory
 * type: integer, range: N/A, unit: N/A
 * Some description.
 */
#define RID_CHANNEL_PLAN 8

/**
 * Channel function: R, Single, Mandatory
 * type: integer, range: N/A, unit: N/A
 * Some description.
 */
#define RID_CHANNEL_FUNCTION 9

/**
 * Excluded channels: R, Multiple, Mandatory
 * type: integer, range: N/A, unit: N/A
 * Some description.
 */
#define RID_EXCLUDED_CHANNELS 10

/**
 * Tamanho maximo do payload: R, Single, Mandatory
 * type: integer, range: N/A, unit: N/A
 * Some description.
 */
#define RID_TAMANHO_MAXIMO_DO_PAYLOAD 11

/**
 * Endereço IPv6 do Servidor MDC: R, Single, Mandatory
 * type: string, range: N/A, unit: N/A
 * Some description.
 */
#define RID_ENDERE_O_IPV6_DO_SERVIDOR_MDC 12

/**
 * Porta UDP do Servidor MDC: R, Single, Mandatory
 * type: integer, range: N/A, unit: N/A
 * Some description.
 */
#define RID_PORTA_UDP_DO_SERVIDOR_MDC 13

/**
 * Reset: E, Single, Mandatory
 * type: N/A, range: N/A, unit: N/A
 * Some description.
 */
#define RID_RESET 14

typedef struct configuracao_wi_sun_object_struct {
    const anjay_dm_object_def_t *def;

    // TODO: object state
} configuracao_wi_sun_object_t;

static inline configuracao_wi_sun_object_t *
get_obj(const anjay_dm_object_def_t *const *obj_ptr) {
    assert(obj_ptr);
    return AVS_CONTAINER_OF(obj_ptr, configuracao_wi_sun_object_t, def);
}

static int instance_reset(anjay_t *anjay,
                          const anjay_dm_object_def_t *const *obj_ptr,
                          anjay_iid_t iid) {
    (void) anjay;
    (void) iid;

    configuracao_wi_sun_object_t *obj = get_obj(obj_ptr);
    assert(obj);
    assert(iid == 0);

    // TODO: instance reset
    return 0;
}

static int list_resources(anjay_t *anjay,
                          const anjay_dm_object_def_t *const *obj_ptr,
                          anjay_iid_t iid,
                          anjay_dm_resource_list_ctx_t *ctx) {
    (void) anjay;
    (void) obj_ptr;
    (void) iid;

    anjay_dm_emit_res(ctx, RID_NETWORK_NAME,
                      ANJAY_DM_RES_RW, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_PAN_ID,
                      ANJAY_DM_RES_RW, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_DISCOVERY_IMIN,
                      ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_DISCOVERY_DOUBLINGS,
                      ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_BROADCAST_TIMEOUT_MIN,
                      ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_BROADCAST_TIMEOUT_MAX_DOUBLINGS,
                      ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_RPL_DIO_MINIMUM_INTERVAL,
                      ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_RPL_DIO_TIMEOUTMAX_DOUBLINGS,
                      ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_CHANNEL_PLAN,
                      ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_CHANNEL_FUNCTION,
                      ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_EXCLUDED_CHANNELS,
                      ANJAY_DM_RES_RM, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_TAMANHO_MAXIMO_DO_PAYLOAD,
                      ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_ENDERE_O_IPV6_DO_SERVIDOR_MDC,
                      ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_PORTA_UDP_DO_SERVIDOR_MDC,
                      ANJAY_DM_RES_R, ANJAY_DM_RES_PRESENT);
    anjay_dm_emit_res(ctx, RID_RESET,
                      ANJAY_DM_RES_E, ANJAY_DM_RES_PRESENT);
    return 0;
}

static int resource_read(anjay_t *anjay,
                         const anjay_dm_object_def_t *const *obj_ptr,
                         anjay_iid_t iid,
                         anjay_rid_t rid,
                         anjay_riid_t riid,
                         anjay_output_ctx_t *ctx) {
    (void) anjay;
    (void) iid;

    configuracao_wi_sun_object_t *obj = get_obj(obj_ptr);
    assert(obj);
    assert(iid == 0);

    switch (rid) {
    case RID_NETWORK_NAME:
        assert(riid == ANJAY_ID_INVALID);
        return anjay_ret_string(ctx, "Multilink"); // TODO

    case RID_PAN_ID:
        assert(riid == ANJAY_ID_INVALID);
        return anjay_ret_i32(ctx, 0); // TODO

    case RID_DISCOVERY_IMIN:
        assert(riid == ANJAY_ID_INVALID);
        return anjay_ret_i32(ctx, 0); // TODO

    case RID_DISCOVERY_DOUBLINGS:
        assert(riid == ANJAY_ID_INVALID);
        return anjay_ret_i32(ctx, 0); // TODO

    case RID_BROADCAST_TIMEOUT_MIN:
        assert(riid == ANJAY_ID_INVALID);
        return anjay_ret_i32(ctx, 0); // TODO

    case RID_BROADCAST_TIMEOUT_MAX_DOUBLINGS:
        assert(riid == ANJAY_ID_INVALID);
        return anjay_ret_i32(ctx, 0); // TODO

    case RID_RPL_DIO_MINIMUM_INTERVAL:
        assert(riid == ANJAY_ID_INVALID);
        return anjay_ret_i32(ctx, 0); // TODO

    case RID_RPL_DIO_TIMEOUTMAX_DOUBLINGS:
        assert(riid == ANJAY_ID_INVALID);
        return anjay_ret_i32(ctx, 0); // TODO

    case RID_CHANNEL_PLAN:
        assert(riid == ANJAY_ID_INVALID);
        return anjay_ret_i32(ctx, 0); // TODO

    case RID_CHANNEL_FUNCTION:
        assert(riid == ANJAY_ID_INVALID);
        return anjay_ret_i32(ctx, 0); // TODO

    case RID_EXCLUDED_CHANNELS:
        // TODO: extract Resource Instance
        return anjay_ret_i32(ctx, 0); // TODO

    case RID_TAMANHO_MAXIMO_DO_PAYLOAD:
        assert(riid == ANJAY_ID_INVALID);
        return anjay_ret_i32(ctx, 200); // TODO

    case RID_ENDERE_O_IPV6_DO_SERVIDOR_MDC:
        assert(riid == ANJAY_ID_INVALID);
        return anjay_ret_string(ctx, ""); // TODO

    case RID_PORTA_UDP_DO_SERVIDOR_MDC:
        assert(riid == ANJAY_ID_INVALID);
        return anjay_ret_i32(ctx, 0); // TODO

    default:
        return ANJAY_ERR_METHOD_NOT_ALLOWED;
    }
}

static int resource_write(anjay_t *anjay,
                          const anjay_dm_object_def_t *const *obj_ptr,
                          anjay_iid_t iid,
                          anjay_rid_t rid,
                          anjay_riid_t riid,
                          anjay_input_ctx_t *ctx) {
    (void) anjay;
    (void) iid;

    configuracao_wi_sun_object_t *obj = get_obj(obj_ptr);
    assert(obj);
    assert(iid == 0);

    int returnValue;

    switch (rid) {
    case RID_NETWORK_NAME: {
        assert(riid == ANJAY_ID_INVALID);
        char value[256]; // TODO
        returnValue = anjay_get_string(ctx, value, sizeof(value)); // TODO
        return returnValue;
    }

    case RID_PAN_ID: {
        assert(riid == ANJAY_ID_INVALID);
        int32_t value; // TODO
        return anjay_get_i32(ctx, &value); // TODO
    }

    default:
        return ANJAY_ERR_METHOD_NOT_ALLOWED;
    }
}

static int resource_execute(anjay_t *anjay,
                            const anjay_dm_object_def_t *const *obj_ptr,
                            anjay_iid_t iid,
                            anjay_rid_t rid,
                            anjay_execute_ctx_t *arg_ctx) {
    (void) anjay;
    (void) iid;
    (void) arg_ctx;

    configuracao_wi_sun_object_t *obj = get_obj(obj_ptr);
    assert(obj);
    assert(iid == 0);

    switch (rid) {
    case RID_RESET:
        return ANJAY_ERR_NOT_IMPLEMENTED; // TODO

    default:
        return ANJAY_ERR_METHOD_NOT_ALLOWED;
    }
}

static int list_resource_instances(anjay_t *anjay,
                                   const anjay_dm_object_def_t *const *obj_ptr,
                                   anjay_iid_t iid,
                                   anjay_rid_t rid,
                                   anjay_dm_list_ctx_t *ctx) {
    (void) anjay;
    (void) iid;

    configuracao_wi_sun_object_t *obj = get_obj(obj_ptr);
    assert(obj);
    assert(iid == 0);

    switch (rid) {
    case RID_EXCLUDED_CHANNELS:
        // anjay_dm_emit(ctx, ...); // TODO
        return 0;

    default:
        return ANJAY_ERR_METHOD_NOT_ALLOWED;
    }
}

static const anjay_dm_object_def_t OBJ_DEF = {
    .oid = 32769,
    .handlers = {
        .list_instances = anjay_dm_list_instances_SINGLE,
        .instance_reset = instance_reset,

        .list_resources = list_resources,
        .resource_read = resource_read,
        .resource_write = resource_write,
        .resource_execute = resource_execute,
        .list_resource_instances = list_resource_instances,

        // TODO: implement these if transactional write/create is required
        .transaction_begin = anjay_dm_transaction_NOOP,
        .transaction_validate = anjay_dm_transaction_NOOP,
        .transaction_commit = anjay_dm_transaction_NOOP,
        .transaction_rollback = anjay_dm_transaction_NOOP
    }
};

const anjay_dm_object_def_t **configuracao_wi_sun_object_create(void) {
    configuracao_wi_sun_object_t *obj = (configuracao_wi_sun_object_t *) avs_calloc(1, sizeof(configuracao_wi_sun_object_t));
    if (!obj) {
        return NULL;
    }
    obj->def = &OBJ_DEF;

    // TODO: object init

    return &obj->def;
}

void configuracao_wi_sun_object_release(const anjay_dm_object_def_t **def) {
    if (def) {
        configuracao_wi_sun_object_t *obj = get_obj(def);

        // TODO: object cleanup

        avs_free(obj);
    }
}