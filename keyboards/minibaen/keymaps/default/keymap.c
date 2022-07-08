#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _FN 1

// Left-hand home row mods
#define HOME_A LCTL_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LGUI_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RGUI_T(KC_K)
#define HOME_L RALT_T(KC_L)
#define HOME_SCLN RCTL_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
    KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_DEL,
    KC_TAB, HOME_A,     HOME_S,     HOME_D,     HOME_F, KC_G, KC_H, HOME_J,  HOME_K,HOME_L,HOME_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLSH, KC_RSFT, KC_RSFT,
    KC_LCTL, KC_LGUI, KC_HOME, KC_LALT, MO(_FN), KC_BSPC, LT(1, KC_SPC), MO(_FN), KC_RALT, KC_HOME, KC_HOME, KC_RGUI, KC_RCTL
  ),
  [_FN] = LAYOUT(
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS, KC_EQL,
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSLS, RESET,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [2] = LAYOUT(
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS, KC_EQL,
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSLS, RESET,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [3] = LAYOUT(
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS, KC_EQL,
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSLS, RESET,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
};
