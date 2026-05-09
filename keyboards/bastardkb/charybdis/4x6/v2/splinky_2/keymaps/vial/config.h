#pragma once

// Vial Configuration
#define VIAL_KEYBOARD_UID {0x04, 0x03, 0x02, 0x01, 0x69, 0x42, 0xEF, 0xBE}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

// Split & Handedness
#define MASTER_RIGHT
// #define SPLIT_HAND_PIN GP13

// Pointing Device (PMW3360)
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_ROTATION_90
#define POINTING_DEVICE_CS_PIN GP14  // Критическое исправление ошибки компиляции
#define PMW3360_CS_PIN GP14          // Дублируем для совместимости с драйвером QMK
#define PMW3360_DPI 1600

// RP2040 Specifics
#define RP2040_FLASH_WEAR_LEVELING_SIZE 16384
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17

// Space Saving & Tuning
#define NO_ACTION_ONESHOT
#define TAPPING_TERM 200
