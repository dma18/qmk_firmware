/* Copyright 2020 foostan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

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
  [0] = LAYOUT(
      KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,     KC_I,    KC_O,   KC_P,  KC_BSPC,
      KC_ESC,  HOME_A,  HOME_S,  HOME_D,  HOME_F,    KC_G,    KC_H,  HOME_J,   HOME_K,  HOME_L, HOME_SCLN, KC_QUOT,
     KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,  KC_COMM,  KC_DOT, KC_SLSH, KC_ENT,
     KC_LCTL, KC_LALT, KC_LGUI,  KC_ESC,  LT(2, KC_TAB), LT(1, KC_BSPC), LT(3, KC_SPC), KC_ENT, KC_BSPC, KC_RGUI,KC_RALT,KC_RCTL
  ),

  [1] = LAYOUT(
      KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSLS,
     KC_TILD, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_LPRN, KC_RPRN, KC_AMPR, KC_ASTR, KC_PERC, KC_CIRC, KC_PIPE,
     _______, XXXXXXX, KC_LCBR, KC_LBRC, KC_MINS,  KC_EQL, KC_PLUS, KC_UNDS, KC_RBRC, KC_RCBR, XXXXXXX, _______,
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),

  [2] = LAYOUT(
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGUP,   KC_UP, KC_PGDN, XXXXXXX, _______,
     _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, _______,
     _______, XXXXXXX,  KC_CUT, KC_COPY,KC_PASTE, XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, _______,
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET
  ),

  [3] = LAYOUT(
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LCTL(KC_LEFT),   KC_UP, LCTL(KC_RGHT), LCTL(KC_UP), _______,
     _______, _______, _______, _______, _______, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, _______,
     _______, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, _______,
     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET
  ),
};
