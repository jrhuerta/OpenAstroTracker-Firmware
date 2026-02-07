#pragma once
/**
 * @brief Pin mapping for WeMos D1 R32 (ESP32) + CNC Shield V3
 */

// RA - CNC V3 X axis
#ifndef RA_STEP_PIN
    #define RA_STEP_PIN 26
#endif
#ifndef RA_DIR_PIN
    #define RA_DIR_PIN 25
#endif
#ifndef RA_EN_PIN
    #define RA_EN_PIN 12
#endif

// DEC - CNC V3 Y axis
#ifndef DEC_STEP_PIN
    #define DEC_STEP_PIN 27
#endif
#ifndef DEC_DIR_PIN
    #define DEC_DIR_PIN 14
#endif
#ifndef DEC_EN_PIN
    #define DEC_EN_PIN 12
#endif

// TMC2209 UART on Serial1 with custom pins
#ifndef RA_SERIAL_PORT
    #define RA_SERIAL_PORT Serial1
#endif
#ifndef RA_TX_PIN
    #define RA_TX_PIN 5
#endif
#ifndef RA_RX_PIN
    #define RA_RX_PIN 13
#endif
#ifndef RA_DRIVER_ADDRESS
    #define RA_DRIVER_ADDRESS 0b00
#endif

#ifndef DEC_SERIAL_PORT
    #define DEC_SERIAL_PORT Serial1
#endif
#ifndef DEC_TX_PIN
    #define DEC_TX_PIN 5
#endif
#ifndef DEC_RX_PIN
    #define DEC_RX_PIN 13
#endif
#ifndef DEC_DRIVER_ADDRESS
    #define DEC_DRIVER_ADDRESS 0b01
#endif

// GPS on Serial2 with custom pins
#ifndef GPS_SERIAL_PORT
    #define GPS_SERIAL_PORT Serial2
#endif
#ifndef GPS_RX_PIN
    #define GPS_RX_PIN 32
#endif
#ifndef GPS_TX_PIN
    #define GPS_TX_PIN 33
#endif

// AutoPA - AZ on Z slot, ALT on A/S slot
#ifndef AZ_STEP_PIN
    #define AZ_STEP_PIN 17
#endif
#ifndef AZ_DIR_PIN
    #define AZ_DIR_PIN 16
#endif
#ifndef AZ_EN_PIN
    #define AZ_EN_PIN 12
#endif

#ifndef ALT_STEP_PIN
    #define ALT_STEP_PIN 19
#endif
#ifndef ALT_DIR_PIN
    #define ALT_DIR_PIN 18
#endif
#ifndef ALT_EN_PIN
    #define ALT_EN_PIN 12
#endif
