#include "stanck.h"

#define _ KC_TRNS
#define _____ KC_TRNS
#define ____________ KC_TRNS
#define __x__ KC_NO

enum LAYER { BASE, SYM, NUM, FN, MEDIA, FLASH };

#define KC_SEMIVOL LT(MEDIA, KC_SCOLON)
#define ENTERSYM LT(SYM, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
 		KC_ESC,  KC_Q  , KC_W   , KC_E,    KC_R,    KC_T,  KC_Y, KC_U,     LT(NUM, KC_I), KC_O,    KC_P,       KC_BSPC,
 		KC_TAB,  KC_A  , KC_S   , KC_D,    KC_F,    KC_G,  KC_H, KC_J,     KC_K,          KC_L,    KC_SEMIVOL, KC_QUOT,
   		KC_LSFT, KC_Z  , KC_X   , KC_C,    KC_V,    KC_B,  KC_N, KC_M,     KC_COMM,       KC_DOT,  KC_UP,      KC_RSFT,
    	MO(FN),  KC_DEL, KC_LGUI, KC_LCTL, KC_LALT,  KC_SPACE  , ENTERSYM, KC_SLSH,       KC_LEFT, KC_DOWN,    KC_RGHT
  	),

	KEYMAP( // KC_SYM
	 LT(FLASH, _),  __x__ , __x__  , KC_EXLM, KC_PERC, KC_TILD, __x__  , KC_UNDS, KC_PIPE, KC_LPRN, KC_RPRN, _____,
		_____    , KC_AT  , KC_DLR , KC_MINS, KC_LCBR, KC_LBRC, KC_RBRC, KC_RCBR, KC_GRV , KC_EQL , KC_COLN, KC_DQUO,
		_____    , KC_AMPR, KC_ASTR, KC_CIRC,  __x__ , KC_BSLS, KC_HASH, KC_PLUS, KC_LT  , KC_GT  , KC_PGUP, _____,
		_____    ,  _____ ,  _____ ,  _____ ,  _____ ,  ____________   ,  _____ , KC_QUES, KC_HOME, KC_PGDN, KC_END
	),

	KEYMAP( // KC_I_PAD
		_____, _____, _____, _____, _____, KC_7, KC_8, KC_9  , _____, _____, _____, _____,
		_____, _____, _____, _____, _____, KC_4, KC_5, KC_6  , _____, _____, _____, _____,
		_____, _____, _____, _____, _____, KC_1, KC_2, KC_3  , _____, _____, _____, _____,
		_____, _____, _____, _____, _____, KC_0,       _____ , _____, _____, _____, _____
	),

	KEYMAP( // KC_F1F12
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
		_____, _____, _____, _____, _____, _____, _____, _____, _____,  _____,  _____,  _____,
		_____, _____, _____, _____, _____, _____, _____, _____, _____,  _____,  _____,  _____,
		_____, _____, _____, _____, _____, ____________, _____, _____,  _____,  _____,  _____
	),

	KEYMAP( // KC_V_VOL
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____,  _____ , _____,
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____,  _____ , KC_MUTE,
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____, KC_VOLU, _____,
		_____, _____, _____, _____, _____, ____________, _____, _____, _____, KC_VOLD, _____
	),

	KEYMAP( // KC_RESET
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, RESET,
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
		_____, _____, _____, _____, _____, ____________, _____, _____, _____, _____, _____
	)
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) { return MACRO_NONE; }
bool process_record_user(uint16_t keycode, keyrecord_t *record) { return true; }
void led_set_user(uint8_t usb_led) {}
void matrix_init_user(void) {}
void matrix_scan_user(void) {}
