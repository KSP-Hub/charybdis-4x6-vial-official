#pragma once

#ifdef VIA_ENABLE
#    define DYNAMIC_KEYMAP_LAYER_COUNT 4
#    ifdef VIAL_ENABLE
#        define VIAL_KEYBOARD_UID {0x6D, 0xA5, 0xCD, 0x8D, 0xC7, 0x3D, 0x7B, 0xA8}
#        define VIAL_UNLOCK_COMBO_ROWS {0, 5}
#        define VIAL_UNLOCK_COMBO_COLS {0, 0}
#    endif
#endif

#define NO_ACTION_ONESHOT
#define TAPPING_TERM 200
