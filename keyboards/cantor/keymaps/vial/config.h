
/* keyboard uid */
#define VIAL_KEYBOARD_UID {0xF0, 0x67, 0x2F, 0x54, 0x23, 0xB3, 0x7B, 0x55}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 3 }
#define VIAL_UNLOCK_COMBO_COLS { 4, 2 }

/* default layer count */
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

// default but used in macros
#undef TAPPING_TERM
#define TAPPING_TERM 150

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define QUICK_TAP_TERM 0

// Auto Shift
#undef NO_AUTO_SHIFT_ALPHA
#define NO_AUTO_SHIFT_ALPHA
#undef AUTO_SHIFT_TIMEOUT
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#undef AUTO_SHIFT_NO_SETUP
#define AUTO_SHIFT_NO_SETUP

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64