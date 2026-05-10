#pragma once
// Vial Configuration
#define VIAL_KEYBOARD_UID {0x04, 0x03, 0x02, 0x01, 0x69, 0x42, 0xEF, 0xBE}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
// Split & Pointing Device
#define MASTER_RIGHT
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_ROTATION_90
#define PMW3360_DPI 1600
// PMW3360 Chip Select Pin (требуется драйвером сенсора)
#define PMW3360_CS_PIN GP14
// EEPROM (RP2040 Flash Wear Leveling)
#define RP2040_FLASH_WEAR_LEVELING_SIZE 16384
