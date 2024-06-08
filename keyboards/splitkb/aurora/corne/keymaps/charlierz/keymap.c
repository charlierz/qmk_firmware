#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(CW_TOGG, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, TO(3), KC_MINS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_COLN, KC_LGUI, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_LALT, LT(2,KC_TAB), LCTL_T(KC_ESC), KC_SPC, KC_ENT, LT(1,KC_BSPC), RSFT_T(KC_DEL)),
	[1] = LAYOUT_split_3x6_3(KC_NO, KC_CIRC, KC_PLUS, KC_LT, KC_GT, KC_NO, KC_NO, KC_RCBR, KC_LCBR, KC_DLR, KC_BSLS, KC_NO, KC_QUOT, KC_UNDS, KC_EXLM, KC_EQL, KC_DQUO, KC_GRV, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_AT, KC_TILD, KC_TRNS, KC_PIPE, KC_ASTR, KC_LPRN, KC_RPRN, KC_HASH, KC_AMPR, KC_RBRC, KC_LBRC, KC_PERC, KC_QUES, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_split_3x6_3(KC_VOLU, KC_F1, KC_F2, KC_F3, KC_F4, KC_MNXT, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_VOLD, KC_F5, KC_F6, KC_F7, KC_F8, KC_MPLY, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_NO, KC_TRNS, KC_F9, KC_F10, KC_F11, KC_F12, KC_MPRV, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_TRNS, KC_0, KC_DOT),
	[3] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_1, KC_Y, KC_U, KC_I, KC_O, KC_P, TG(3), KC_ESC, KC_A, KC_S, KC_D, KC_F, KC_2, KC_H, KC_J, KC_K, KC_L, KC_T, KC_G, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_3, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_B, KC_LALT, KC_LCTL, KC_SPC, KC_ENT, KC_BSPC, KC_DEL)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

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
