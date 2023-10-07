/* Copyright 2018 MechMerlin
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

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_5x15(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______,  KC_6,  KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,    KC_EQL,
   LT(2,KC_TAB), KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, _______,  KC_Y,  KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,    KC_RBRC,
   LT(1,KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______, _______,  KC_H,  KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,    KC_ENT,
        KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    _______, QK_BOOT,  KC_B,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,      KC_SLSH,
        KC_LCTL, _______, KC_LALT, KC_LGUI, _______, KC_SPC,  _______, RGB_TOG,KC_BSPC, _______, KC_DEL,  _______, KC_LEFT, KC_DOWN,    KC_RGHT
    ),

    [1] = LAYOUT_ortho_5x15(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
        _______, _______, _______, _______, _______, KC_GRV,  _______, _______, _______, _______, KC_UP,   _______, _______, KC_RBRC, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_GRV,  KC_PENT,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_RBRC, _______, _______, KC_PGUP, _______,
        _______, _______, _______, _______, _______, KC_ENT,  _______, _______, KC_DEL,  _______, _______, _______, KC_HOME, KC_PGDN, KC_END
    ),

    [2] = LAYOUT_ortho_5x15(
        RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_SPI, _______, _______, _______, _______, _______, _______, _______, _______, RGB_VAD, RGB_VAI,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PGUP, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_END,  _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode QMKURL is released
      }
      break;
  }
  return true;
}
