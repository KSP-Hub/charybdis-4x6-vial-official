# Core Features
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes
QMK_SETTINGS = no

# Hardware & Drivers
BOOTLOADER = custom
SERIAL_DRIVER = vendor
EEPROM_DRIVER = vendor
SPLIT_KEYBOARD = yes

# Pointing Device
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360
MOUSE_ENABLE = yes

# RGB (Disabled to save flash & avoid driver schema errors)
RGB_MATRIX_ENABLE = no
RGBLIGHT_ENABLE = no
VIALRGB_ENABLE = no

# Space Saving
COMBO_ENABLE = no
KEY_OVERRIDE_ENABLE = no
SPACE_CADET_ENABLE = no
TAP_DANCE_ENABLE = no
