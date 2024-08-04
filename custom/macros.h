static bool use_intl = true;

enum symbol_macros {
  S_INTL = SAFE_RANGE,
  S_TILD,
  S_SQTE,
  S_DQTE,
  S_TICK,
  S_CART
};

void toggle_intl(keyrecord_t *record) {
  if (record->event.pressed) {
    if (use_intl == true) {
      use_intl = false;
    } else {
      use_intl = true;
    }
  }
}

void do_dead_key(keyrecord_t *record, int code, uint8_t modifier) {
  if (record->event.pressed) {
    register_code(modifier);
    register_code(code);
    unregister_code(code);
    unregister_code(modifier);

    if (use_intl) {
      register_code(KC_SPC);
      unregister_code(KC_SPC);
    }
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case S_INTL: toggle_intl(record); break;
    case S_TILD: do_dead_key(record, KC_TILD, KC_LSFT); break;
    case S_DQTE: do_dead_key(record, KC_DQUO, KC_LSFT); break;
    case S_SQTE: do_dead_key(record, KC_QUOT, KC_NO); break;
    case S_CART: do_dead_key(record, KC_CIRC, KC_LSFT); break;
    case S_TICK: do_dead_key(record, KC_GRV, KC_NO); break;
  }

  return true;
}
