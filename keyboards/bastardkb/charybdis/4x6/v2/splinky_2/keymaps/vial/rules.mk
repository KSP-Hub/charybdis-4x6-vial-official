# Vial & VIA
VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes
QMK_SETTINGS = yes

# Features
COMBO_ENABLE = no
KEY_OVERRIDE_ENABLE = no
SPACE_CADET_ENABLE = no
TAP_DANCE_ENABLE = no
MOUSEKEY_ENABLE = yes

# Pointing Device (наследуется от keyboard level, но явно разрешаем)
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360

# RGB (отключаем для экономии flash и избежания ошибок схемы Vial)
RGB_MATRIX_ENABLE = no
RGBLIGHT_ENABLE = no
VIALRGB_ENABLE = no

# Bootloader handled by info.json to avoid CI schema conflict
# BOOTLOADER = custom
