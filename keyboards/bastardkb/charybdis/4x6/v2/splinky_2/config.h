/*
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

/* Vial Configuration */
#define VIAL_KEYBOARD_UID {0x04, 0x03, 0x02, 0x01, 0x69, 0x42, 0xEF, 0xBE}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 1 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

/* Handedness & Split */
#define MASTER_RIGHT
#define POINTING_DEVICE_RIGHT
#define POINTING_DEVICE_ROTATION_90

/* SPI & PMW3360 settings */
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP18
#define SPI_MISO_PIN GP20
#define SPI_MOSI_PIN GP19
#define POINTING_DEVICE_CS_PIN GP14
#define PMW3360_DPI 1600

/* RP2040 Bootloader & Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

/* EEPROM (RP2040 Flash Wear Leveling) */
#define RP2040_FLASH_WEAR_LEVELING_SIZE 16384
