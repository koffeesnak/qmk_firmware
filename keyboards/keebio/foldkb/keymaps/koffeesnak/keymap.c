/* Copyright 2021 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    RGB_TOG, KC_GRV,    KC_1,  KC_2,    KC_3,    KC_4,    KC_5,    KC_6,        KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, _______,
    RGB_MOD,          KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    RGB_HUI,    LT(1,KC_ESC),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    RGB_SAI,         KC_LSFT,  KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,        KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______,
    RGB_VAI, LCTL_T(KC_BSLS),  _______, KC_LALT, KC_LGUI, KC_SPC,  KC_SPC,      KC_BSPC, KC_DEL,  MO(2),            _______, _______, _______
  ), 
  [1] = LAYOUT(
KC_SYSTEM_SLEEP,_______,KC_GRV,_______, _______, _______, _______, _______,     _______, _______, KC_PGUP, _______, _______, _______, _______, _______,
    _______,          _______, _______, _______, _______, _______, _______,     _______, _______, KC_UP,   _______, _______, KC_RBRC, _______, _______,
    _______,          _______, _______, _______, _______, _______, _______,     KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  KC_GRV,  KC_PENT,
    _______,          _______, _______, _______, _______, _______, _______,     _______, _______, KC_PGDN, _______, _______, KC_BSLS, _______,
    _______,          _______, _______, _______, _______, KC_ENT,  KC_ENT,      _______, _______, _______,          _______, _______, _______
  ),
  [2] = LAYOUT(
    _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,       KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
    _______,          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______, _______,
    _______,          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
    _______,          _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______,
    _______,          _______, _______, _______, _______, _______, _______,     _______, _______, _______,          _______, _______, _______
  )
};
