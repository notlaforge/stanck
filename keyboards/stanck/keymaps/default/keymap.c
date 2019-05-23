#include "stanck.h"

#define _____ KC_TRANSPARENT
#define ____________ KC_TRNS
#define __x__ KC_NO

#define KC_I_PAD LT(2, KC_I)
#define KC_RESET LT(4, _____)
#define KC_V_VOL LT(5,  KC_V)
#define KC_C_CUR LT(6,  KC_C)
#define KC_F1F12 MO(1)
#define KC_FORTY MO(3)
#define KC_SPACEBAR KC_SPACE
#define KC_SLASH_SFT SFT_T(KC_SLSH)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
		KC_TAB,  KC_Q   , KC_W   , KC_E    , KC_R,     KC_T,  KC_Y, KC_U,   KC_I_PAD, KC_O,    KC_P,      KC_BSPC,
		KC_ESC,  KC_A   , KC_S   , KC_D    , KC_F,     KC_G,  KC_H, KC_J,   KC_K   ,  KC_L,    KC_SCOLON, KC_QUOT,
   		KC_LSFT, KC_Z   , KC_X   , KC_C_CUR, KC_V_VOL, KC_B,  KC_N, KC_M,   KC_COMM,  KC_DOT,  KC_UP,     KC_SLASH_SFT,
    	KC_DEL,  KC_LALT, KC_LGUI, KC_LCTL , KC_FORTY, KC_SPACEBAR, KC_ENT, KC_F1F12, KC_LEFT, KC_DOWN,   KC_RGHT
  	),

	KEYMAP( // KC_F1F12
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
		_____, _____, _____, _____, _____, _____, _____, _____, _____,  _____,  _____,  _____,
		_____, _____, _____, _____, _____, _____, _____, _____, _____,  _____,  _____,  _____,
		_____, _____, _____, _____, _____, ____________, _____, _____,  _____,  _____,  _____
	),

	KEYMAP( // KC_I_PAD
		_____, _____, _____, _____, _____, KC_7, KC_8, KC_9  , _____, _____, _____, _____,
		_____, _____, _____, _____, _____, KC_4, KC_5, KC_6  , _____, _____, _____, _____,
		_____, _____, _____, _____, _____, KC_1, KC_2, KC_3  , _____, _____, _____, _____,
		_____, _____, _____, _____, _____, KC_0,       KC_ENT, _____, _____, _____, _____
	),

	KEYMAP( // KC_FORTY
		_____, KC_GRV , __x__  , KC_EQL , KC_PERC, __x__  , __x__  , KC_UNDS, KC_PIPE, KC_LPRN, KC_RPRN, KC_RESET,
		_____, KC_AT  , KC_DLR , KC_MINS, KC_LBRC, KC_BSLS, KC_HASH, KC_RBRC, KC_LCBR, KC_RCBR, KC_COLN, KC_DQUO,
		_____, KC_AMPR, KC_ASTR, KC_CIRC,  __x__ , KC_EXLM, KC_TILD, KC_PLUS, KC_LABK, KC_RABK, KC_PGUP, KC_QUES,
		_____,  _____ ,  _____ ,  _____ ,   ____________  ,  _____ ,  _____ ,  _____ , KC_HOME, KC_PGDN, KC_END
	),

	KEYMAP( // KC_RESET
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, RESET,
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____, _____,
		_____, _____, _____, _____, _____, ____________, _____, _____, _____, _____, _____
	),

	KEYMAP( // KC_V_VOL
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____,  _____ , _____,
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____,  _____ , _____,
		_____, _____, _____, _____, _____, _____, _____, _____, _____, _____, KC_VOLU, _____,
		_____, _____, _____, _____, _____, ____________, _____, _____, _____, KC_VOLD, _____
	),

	KEYMAP(
		_____, _____, _____, _____, _____, _____, _____, _____, _____,      _____, _____     , _____,
		_____, _____, _____, _____, _____, _____, _____, _____, _____,      _____, _____     , _____,
		_____, _____, _____, _____, _____, _____, _____, _____, _____,     KC_BTN1 , KC_MS_UP  , KC_BTN2,
		_____, _____, _____, _____, _____, ____________, _____, _____, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT
	)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	return MACRO_NONE;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {
}


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}