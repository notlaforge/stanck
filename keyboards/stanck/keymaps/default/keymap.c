#include "stanck.h"

#define _ KC_TRNS
#define _____ KC_TRNS
#define ____________ KC_TRNS

#define ___x___ KC_NO

enum LAYER { BASE, SYM, FN, NUM, MEDIA, FLASH };

#define LT_VOL LT(MEDIA, KC_SCOLON)
#define LT_SYM LT(SYM, KC_ENT)
#define LT_NUM LT(NUM, KC_I)
#define LT_FSH LT(FLASH, _)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
		KC_ESC , KC_Q  , KC_W   , KC_E   , KC_R   , KC_T, KC_Y, KC_U  , LT_NUM , KC_O   , KC_P   , KC_BSPC,
		KC_TAB , KC_A  , KC_S   , KC_D   , KC_F   , KC_G, KC_H, KC_J  , KC_K   , KC_L   , LT_VOL , KC_QUOT,
		KC_LSFT, KC_Z  , KC_X   , KC_C   , KC_V   , KC_B, KC_N, KC_M  , KC_COMM, KC_DOT , KC_UP  , KC_RSFT,
		MO(FN) , KC_DEL, KC_LGUI, KC_LALT, KC_LCTL, KC_SPACE  , LT_SYM, KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
	),

	KEYMAP(
		LT_FSH, KC_LCBR, KC_RCBR, KC_EXLM, KC_PERC, KC_TILD, ___x___, KC_UNDS, KC_PIPE, KC_LPRN, KC_RPRN, _____,
		_____ , KC_AT  , KC_DLR , KC_MINS, ___x___, KC_LBRC, KC_RBRC, ___x___, KC_GRV , KC_EQL , KC_COLN, KC_DQUO,
		_____ , KC_AMPR, KC_ASTR, KC_CIRC, ___x___, KC_BSLS, KC_HASH, KC_PLUS, KC_LT  , KC_GT  , KC_PGUP, _____,
		_____ , _____  , _____  , _____  , _____  ,  ____________   ,  _____ , KC_QUES, KC_HOME, KC_PGDN, KC_END
	),

	KEYMAP(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____ , _____ , _____,
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____ , _____ , _____,
		_____, _____, _____, _____, _____, ____________, _____, _____, _____ , _____ , _____
	),

	KEYMAP(
		_, _, _, _, _, KC_7, KC_8, KC_9, _, _, _, _,
		_, _, _, _, _, KC_4, KC_5, KC_6, _, _, _, _,
		_, _, _, _, _, KC_1, KC_2, KC_3, _, _, _, _,
		_, _, _, _, _,    KC_0,   _____, _, _, _, _
	),

	KEYMAP(
		_, _, _, _, _, _,  _, _, _, _, _____  , _____,
		_, _, _, _, _, _,  _, _, _, _, _____  , KC_MUTE,
		_, _, _, _, _, _,  _, _, _, _, KC_VOLU, _____,
		_, _, _, _, _, _____, _, _, _, KC_VOLD, _____
	),

	KEYMAP(
		_, _, _, _, _, _,  _, _, _, _, _, RESET,
		_, _, _, _, _, _,  _, _, _, _, _, _____,
		_, _, _, _, _, _,  _, _, _, _, _, _____,
		_, _, _, _, _, _____, _, _, _, _, _____
	)
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) { return MACRO_NONE; }
bool process_record_user(uint16_t keycode, keyrecord_t *record) { return true; }
void led_set_user(uint8_t usb_led) {}
void matrix_init_user(void) {}
void matrix_scan_user(void) {}
