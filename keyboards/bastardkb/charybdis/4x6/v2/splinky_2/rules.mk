# Core & Vial
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes
QMK_SETTINGS = no

# RP2040 Bootloader & Storage
BOOTLOADER = rp2040
EEPROM_DRIVER = vendor

# Split & Communication
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = vendor

# Pointing Device
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360
MOUSE_ENABLE = yes

# RGB (Disabled to save flash & avoid schema/driver conflicts)
RGB_MATRIX_ENABLE = no
RGBLIGHT_ENABLE = no
VIALRGB_ENABLE = no

# Space Saving
COMBO_ENABLE = no
KEY_OVERRIDE_ENABLE = no
SPACE_CADET_ENABLE = no
TAP_DANCE_ENABLE = no
