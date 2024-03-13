void keyboard_pre_init_user(void) {
  // Set our LED pin as output
  setPinOutput(24);
}

void housekeeping_task_user(void) {
  if (get_highest_layer(layer_state | default_layer_state) == 3) {
    writePinLow(24);
  }
  else {
    writePinHigh(24);
  }
}
