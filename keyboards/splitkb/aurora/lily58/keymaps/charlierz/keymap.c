#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
        KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5,            KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
        CW_TOGG, KC_Q, KC_W, KC_E, KC_R, KC_T,          KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RGUI,
        OS_LCSG, KC_A, KC_S, KC_D, KC_F, KC_G,    KC_H, KC_J, KC_K, KC_L, KC_COLN, KC_MINS,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_ENT,  TO(3), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LGUI, LT(2,KC_TAB), LCTL_T(KC_ESC), KC_SPC,  KC_ENT, LT(1,KC_BSPC), LALT_T(KC_DEL), KC_NO
    ),
	[1] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_DLR, KC_LCBR, KC_RCBR, KC_NO,              KC_NO, KC_LT, KC_GT, KC_PERC, KC_NO, KC_NO,
        KC_NO, KC_UNDS, KC_EXLM, KC_LPRN, KC_RPRN, KC_HASH,         KC_AT, KC_EQL, KC_DQUO, KC_QUOT, KC_GRV, KC_PLUS,
        KC_NO, KC_BSLS, KC_ASTR, KC_LBRC, KC_RBRC, KC_TILD, KC_NO,  KC_NO, KC_CIRC, KC_AMPR, KC_SCLN, KC_PIPE, KC_QUES, KC_NO,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                         KC_TRNS, KC_TRNS, KC_TRNS, KC_NO
    ),
	[2] = LAYOUT(
        RGB_TOG, RGB_VAI, RGB_VAD, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD,
        KC_VOLU, KC_PSCR, KC_7, KC_8, KC_9, KC_MNXT,      KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
        KC_VOLD, KC_NO, KC_4, KC_5, KC_6, KC_MPLY,        KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
        KC_MUTE, KC_0, KC_1, KC_2, KC_3, KC_MPRV, KC_NO,  KC_NO, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_ENT,                KC_TRNS, KC_TRNS, KC_TRNS, KC_NO
    ),
	[3] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,         KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,         KC_Y, KC_U, KC_I, KC_O, KC_P, KC_EQL,
        KC_Y, KC_A, KC_S, KC_D, KC_F, KC_G,           KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_6,  TG(3), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_GRV,
        KC_ENT, KC_LALT, KC_LCTL, KC_SPC,             KC_ENT, KC_BSPC, KC_DEL, KC_RGUI
    )
};

void keyboard_pre_init_user(void) {
  // Set our LED pin as output
  setPinOutput(24);
}

void housekeeping_task_user(void) {
  if (get_highest_layer(layer_state | default_layer_state) == 3) {
    writePinLow(24);
  }
  else
  {
    writePinHigh(24);
  }
}
