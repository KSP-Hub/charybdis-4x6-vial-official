# Hardware & Build Options
BOOTLOADER = rp2040
SERIAL_DRIVER = vendor
EEPROM_DRIVER = vendor
SPLIT_KEYBOARD = yes

# Pointing Device (Trackball)
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360
MOUSE_ENABLE = yes

# RGB (отключаем, чтобы избежать ошибки драйвера и сэкономить память)
RGB_MATRIX_ENABLE = no
RGBLIGHT_ENABLE = no
VIALRGB_ENABLE = no

# Space saving (базовые отключения на уровне железа)
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
NKRO_ENABLE = no
BACKLIGHT_ENABLE = no
AUDIO_ENABLE = no
