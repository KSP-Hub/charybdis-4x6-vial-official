# Vial & VIA
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes
QMK_SETTINGS = yes

# Features
COMBO_ENABLE = yes
ONE_SHOT_ENABLE = yes
MOUSE_ENABLE = yes

# RGB (Disabled to save flash & avoid driver schema errors on RP2040)
RGB_MATRIX_ENABLE = no
RGBLIGHT_ENABLE = no
VIALRGB_ENABLE = no

# Pointing Device & Split
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = vendor

# Storage & Bootloader
EEPROM_DRIVER = vendor
BOOTLOADER = rp2040
