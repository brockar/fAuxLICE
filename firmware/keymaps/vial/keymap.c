/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		KC_A, KC_A, KC_A, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, QK_BOOT,
		QK_BOOT, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, QK_RBT,
		QK_BOOT, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, QK_BOOT,
		QK_RBT, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, QK_BOOT,
		QK_BOOT, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E
	),

	[1] = LAYOUT(
		KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E,
		KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E,
		KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E,
		KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E,
		KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E
	),

	[2] = LAYOUT(
		KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E,
		KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E,
		KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E,
		KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E,
		KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E, KC_E
	),

};
