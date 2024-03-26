#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_NO, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_NO, KC_NO, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_NO, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, LGUI_T(KC_TAB), LT(2,KC_ESC), LCTL_T(KC_SPC), RSFT_T(KC_ENT), LT(1,KC_BSPC), LALT_T(KC_DEL)),
	[1] = LAYOUT_split_3x6_3(KC_NO, KC_LT, KC_SLSH, KC_LCBR, KC_RCBR, KC_GT, KC_CIRC, KC_AT, KC_HASH, KC_BSLS, KC_TILD, KC_NO, KC_NO, KC_MINS, KC_UNDS, KC_LPRN, KC_RPRN, KC_COLN, KC_DLR, KC_EQL, KC_DQUO, KC_QUOT, KC_GRV, KC_NO, KC_NO, KC_PLUS, KC_EXLM, KC_LBRC, KC_RBRC, KC_SCLN, KC_PERC, KC_ASTR, KC_AMPR, KC_PIPE, KC_QUES, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PSCR),
	[2] = LAYOUT_split_3x6_3(KC_NO, KC_VOLU, KC_7, KC_8, KC_9, KC_MNXT, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, KC_NO, KC_0, KC_4, KC_5, KC_6, KC_MPLY, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_F12, KC_NO, KC_NO, KC_VOLD, KC_1, KC_2, KC_3, KC_MPRV, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_MUTE, KC_TRNS, LSFT_T(KC_ENT), KC_TRNS, KC_TRNS, KC_F11)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

void keyboard_pre_init_user(void) {
  // Set our LED pin as output
  setPinOutput(24);
  writePinHigh(24);
}
