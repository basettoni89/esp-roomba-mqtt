#include "secrets.h"

#define HOSTNAME "roomba-esp01" // e.g. roomba.local
#define BRC_PIN 2
#define ROOMBA_650_SLEEP_FIX 1

#define ADC_VOLTAGE_DIVIDER 44.551316985
//#define ENABLE_ADC_SLEEP

#define MQTT_SERVER "192.168.1.10"
#define MQTT_USER "mqtt"
#define MQTT_COMMAND_TOPIC "/home/roomba/command"
#define MQTT_STATE_TOPIC "/home/roomba/state"
