#pragma once

// Vial Security & UID
#define VIAL_KEYBOARD_UID {0x04, 0x03, 0x02, 0x01, 0x69, 0x42, 0xEF, 0xBE}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

// Split & Master
#define MASTER_RIGHT
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_ROTATION_90

// Serial Transport (RP2040 Split)
#define SOFT_SERIAL_PIN GP1
#define SERIAL_USE_MULTI_TRANSACTION

// PMW3360 Trackball
#define POINTING_DEVICE_DRIVER pmw3360
#define PMW3360_CS_PIN GP14
#define PMW3360_DPI 1600

// EEPROM (RP2040 Flash Wear Leveling)
#define EEPROM_DRIVER vendor
#define RP2040_FLASH_WEAR_LEVELING_SIZE 16384
