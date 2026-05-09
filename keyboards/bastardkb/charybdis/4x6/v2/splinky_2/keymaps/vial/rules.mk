# MCU & Bootloader (обязательно для RP2040 в этой версии QMK)
MCU = RP2040
BOOTLOADER = rp2040

# Vial & VIA
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes
VIALRGB_ENABLE = no
QMK_SETTINGS = yes

# Features
COMBO_ENABLE = yes
ONE_SHOT_ENABLE = yes
MOUSE_ENABLE = yes
SPLIT_KEYBOARD = yes

# Pointing Device
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360

# Lighting (отключено для экономии места)
RGB_MATRIX_ENABLE = no
RGBLIGHT_ENABLE = no

# EEPROM
EEPROM_DRIVER = vendor
