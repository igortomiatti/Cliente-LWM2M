#ifndef DEF_H
#define DEF_H

//DEVICE
#define MANUFACTURER "Lactec"
#define MODEL_NUMBER "HW1"
#define FIRMWARE_VERSION "1.0"
#define HARDWARE_VERSION "1.0"
#define SOFTWARE_VERSION "1.0"

//CONFIG WISUN
#define NETWORK_NAME "Multilink"
#define PAN_ID 255
#define DISCOVERY_IMIN 2
#define DISCOVERY_DOUBLINGS 3
#define BROADCAST_TIMEOUT_MIN 4
#define BROADCAST_TIMEOUT_MAX_DOUBLINGS 5
#define RPL_DIO_MINIMUM_INTERVAL 6
#define RPL_DIO_TIMEOUTMAX_DOUBLINGS 7
#define CHANNEL_PLAN 8
#define CHANNEL_FUNCTION 9
#define EXCLUDED_CHANNELS 10
#define TAMANHO_MAXIMO_DO_PAYLOAD 1024
#define ENDERE_O_IPV6_DO_SERVIDOR_MDC "2001:1284:f016:5616:c869:d76a:7577:f703"
#define PORTA_UDP_DO_SERVIDOR_MDC 27000
#define MAC_ADDRESS "DA:0F:99:A7:22:61"
#define FREQUENCY_MODE 0
#define CHANNEL 10
#define TRANSMISSION_POWER 200
#define WSUN_MODE 5

//DIAGNOSTICO WISUN
#define IDENTIFICA_O_DISPOSITIVO "Multi"
#define VERS_O_DO_PROTOCOLO_WI_SUN "2.3"
#define IF_N_MERO_DE_DISPOSITIVOS_F_SICOS_CONECTADOS 5
#define IF_ENDERE_O_DO_DISPOSITIVO_F_SICO "2017:1284:f016:5616:c869:d76a:7577:1"
#define IF_CONTADOR_DE_PACOTES_RECEBIDOS_PARA_INTERFACE 4
#define IF_CONTADOR_DE_PACOTES_ENVIADOS_PELA_INTERFACE 5
#define IF_CONTADOR_DE_ERRO_WI_SUN_NO_ENVIO_DO_PACOTE 6
#define EW_RX_SUCCESS_COUNT 7
#define EW_TX_SUCCESS_COUNT 8
#define EW_TX_FAILCOUNT 9
#define EW_TX_RETRY_COUNT 10
#define EW_RSSI 200
#define EW_INTERVALO_DE_ENVIO 12
#define PARENT_IPV6_PREFERRED "2017:1284:f016:5616:c869:d76a:7577:6"
#define PARENT_IPV6_ALTERNATIVE "2017:1284:f016:5616:c869:d76a:7577:5"
#define TIME_TO_CONNECT 60

#endif
