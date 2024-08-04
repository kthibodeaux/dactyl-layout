#include QMK_KEYBOARD_H
#include "custom/homerow_modifiers.h"
#include "custom/i3.h"
#include "custom/tapdance.h"

enum layers {
  BASE,
  SYMB,
  NUM,
  GAME
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*[BLANK_LAYOUT] = LAYOUT_5x6(*/
    /*_______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,*/
    /*_______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,*/
    /*_______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______,    _______,*/
    /*_______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,*/
    /*                  _______, _______,                                         _______, _______,*/
    /*                                 _______,    _______,    _______, _______,*/
    /*                                 _______,    _______,    _______, _______,*/
    /*                                 _______,    _______,    _______, _______*/
  /*)*/
  [BASE] = LAYOUT_5x6(
    _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, TG(GAME),
    KC_DEL,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,        KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSLS,
    _______, MY_A,    MY_R,    KC_S,    MY_T,    KC_D,        KC_H,    MY_N,    KC_E,    MY_I,    MY_O,    _______,
    _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
                   _______, _______,                                            _______, _______,
                                     MO(NUM),    MY_SPC,      KC_ENT,  _______,
                                     KC_BSPC,    _______,     _______, KC_TAB,
                                     KC_ESC,     _______,     _______, _______
  ),
  [NUM] = LAYOUT_5x6(
    _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
    _______, I3_1,    I3_2,    I3_3,    I3_4,    I3_5,        I3_6,    I3_7,    I3_8,    I3_9,    I3_0,    _______,
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    _______, I3M_1,   I3M_2,   I3M_3,   I3M_4,   I3M_5,       I3M_6,   I3M_7,   I3M_8,   I3M_9,   I3M_0,   _______,
                      _______, _______,                                         _______, _______,
                                     _______,    _______,    KC_UP,   _______,
                                     _______,    _______,    _______, KC_DOWN,
                                     _______,    _______,    _______, _______
  ),
  [GAME] = LAYOUT_5x6(
    KC_TAB,  _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,
    KC_LCTL, KC_A,    KC_R,    KC_S,    KC_T,    _______,    _______, KC_N,    KC_E,    KC_I,    KC_O,    _______,
    KC_LSFT, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, KC_RSFT,
                      _______, _______,                                         _______, _______,
                                     _______,    KC_SPC,     _______, _______,
                                     _______,    _______,    _______, _______,
                                     _______,    _______,    _______, _______
  )
};
