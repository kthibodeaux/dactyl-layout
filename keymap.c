#include QMK_KEYBOARD_H
#include "custom/homerow_modifiers.h"
#include "custom/tapdance.h"

enum layers {
  _BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_5x6(
    _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
    KC_DEL,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,        KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
    _______, MY_A,    MY_R,    KC_S,    MY_T,    KC_D,        KC_H,    MY_N,    KC_E,    MY_I,    MY_O,    _______,
    _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
                   _______, _______,                                            _______, _______,
                                     _______,    MY_SPC,      KC_ENT,  _______,
                                     KC_BSPC,    _______,     _______, KC_TAB,
                                     KC_ESC,     _______,     _______, _______
  )
};
