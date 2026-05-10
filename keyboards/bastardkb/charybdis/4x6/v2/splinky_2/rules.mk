# Core Features
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes
QMK_SETTINGS = no

# Hardware & Drivers (RP2040 Official Vial-QMK baseline)
MCU = RP2040
BOOTLOADER = rp2040
SERIAL_DRIVER = vendor
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_PROVIDER = rp2040_flash

SPLIT_KEYBOARD = yes

# Pointing Device
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360
MOUSE_ENABLE = yes

# RGB (Explicitly disabled, but driver set to pass QMK schema validation)
RGB_MATRIX_ENABLE = no
RGB_MATRIX_DRIVER = ws2812
RGBLIGHT_ENABLE = no
VIALRGB_ENABLE = no

# Space Saving
COMBO_ENABLE = no
KEY_OVERRIDE_ENABLE = no
SPACE_CADET_ENABLE = no
TAP_DANCE_ENABLE = no
