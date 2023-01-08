#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16
#define MATRIX_MUX_COLS 4

/* 0   1   2   3   4   5   6   7   8   9  10  11 */
#define MATRIX_ROW_PINS { B6, B2, B3, B1, F7 }
#define MATRIX_COL_PINS { }
#define MATRIX_COL_MUX_PINS { D7, E6, B4, B5 }

/* Mouse configuration */
#define MK_KINETIC_SPEED 1
#define MOUSEKEY_BASE_SPEED 2000

/* There's a custom matrix with a demux so no ROW2COL or COL2ROW! */

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
