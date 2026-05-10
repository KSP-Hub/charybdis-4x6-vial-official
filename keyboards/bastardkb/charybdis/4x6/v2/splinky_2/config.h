#pragma once

/* Vial Configuration */
#define VIAL_KEYBOARD_UID {0x04, 0x03, 0x02, 0x01, 0x69, 0x42, 0xEF, 0xBE}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

/* Split & Handedness */
#define MASTER_RIGHT
// #define SPLIT_HAND_PIN GP13
// #define SPLIT_HAND_PIN_LOW_IS_LEFT

/* Pointing Device (PMW3360) */
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_ROTATION_90
#define POINTING_DEVICE_CS_PIN GP14

/* SPI Configuration for PMW3360 */
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP18
#define SPI_MOSI_PIN GP19
#define SPI_MISO_PIN GP20

/* RP2040 Bootloader & Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17

/* EEPROM Emulation (RP2040 Flash Wear Leveling) */
#define RP2040_FLASH_WEAR_LEVELING_SIZE 16384

/* USB VBUS Detection (рекомендуется для сплит-клавиатур) */
#define USB_VBUS_PIN GP25
