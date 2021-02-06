/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include "keymap_german.h"

#include QMK_KEYBOARD_H

enum xzr_layer { xzr_layer_base, xzr_layer_signs, xzr_layer_movenum, xzr_layer_fkeys, xzr_layer_mousemedia, xzr_layer_special };

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [xzr_layer_base] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
   TG(4)  , DE_X           , DE_V, DE_L   , DE_C         , DE_W,                DE_K, DE_H, DE_G, DE_F     , DE_Q        , LGUI_T(DE_SS),
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
   MO(1)  , DE_U           , DE_I, DE_A   , DE_E         , DE_O,                DE_S, DE_N, DE_R, DE_T     , DE_D        , LT(1,DE_Y),
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
   KC_LSFT, LCTL_T(DE_UDIA), DE_ODIA, LT(3,DE_ADIA), DE_P, DE_Z,                DE_B, DE_M, DE_COMM, DE_DOT, RCTL_T(DE_J), KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         KC_LALT, MO(2),   KC_SPC,     KC_SPC,  MO(2),   KC_LALT
                                      //`--------------------------'  `--------------------------'

  ),

  [xzr_layer_signs] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, DE_EURO, DE_UNDS, DE_LBRC, DE_RBRC, DE_CIRC,                      DE_EXLM, DE_LABK, DE_RABK, DE_EQL,  DE_AMPR, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, DE_BSLS, DE_SLSH, DE_LCBR, DE_RCBR, DE_ASTR,                      DE_QUES, DE_LPRN, DE_RPRN, DE_MINS, DE_COLN,   DE_AT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, DE_HASH,  DE_DLR, DE_PIPE, DE_TILD,  DE_GRV,                      DE_PLUS, DE_PERC, DE_DQUO, DE_QUOT, DE_SCLN, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

  [xzr_layer_movenum] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, KC_PGDN, KC_BSPC,   KC_UP,KC_DELETE,KC_PGUP,                      KC_TRNS,    DE_7,    DE_8,    DE_9, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END,                      KC_TRNS,    DE_4,    DE_5,    DE_6, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS,  KC_ESC,  KC_TAB,  KC_SPC,  KC_ENT, KC_TRNS,                      KC_TRNS,    DE_1,    DE_2,    DE_3, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, DE_0, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

  [xzr_layer_fkeys] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_F1, KC_F4, KC_F7, KC_F10, KC_NLCK, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_F2, KC_F5, KC_F8, KC_F11, KC_PSCR, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_F3, KC_F6, KC_F9, KC_F12, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

  [xzr_layer_mousemedia] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, KC_WH_U,KC_MS_BTN2,KC_MS_U,KC_MS_BTN1,KC_WH_D,                    KC_MUTE, KC_MPRV, KC_MNXT, RGB_TOG, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,                     KC_VOLU,KC_MPLY,KC_MSTP,RGB_MODE_FORWARD,KC_TRNS,KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       OSL(5), KC_TRNS, KC_CUT, KC_COPY, KC_PSTE, KC_TRNS,                      KC_VOLD, KC_BRIU, KC_BRID, KC_TRNS, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_TRNS, KC_TRNS, KC_TRNS,    KC_MS_BTN2, KC_MS_BTN1, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

  [xzr_layer_special] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO,   RESET,                              RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, EEPROM_RESET,                           EEPROM_RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_NO, KC_NO, KC_NO,          KC_NO, KC_NO, KC_NO
                                      //`--------------------------'  `--------------------------'
  )
  /* [?] = LAYOUT_split_3x6_3( */
  /* //,-----------------------------------------------------.                    ,-----------------------------------------------------. */
  /*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, */
  /* //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------| */
  /*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, */
  /* //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------| */
  /*     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, */
  /* //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------| */
  /*                                         KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS */
  /*                                     //`--------------------------'  `--------------------------' */
  /* ) */
};
// clang-format on

/* https://docs.qmk.fm/#/custom_quantum_functions?id=keyboard-initialization-code */
void keyboard_post_init_user(void) {}

/* https://docs.qmk.fm/#/custom_quantum_functions?id=layer-change-code */
layer_state_t layer_state_set_user(layer_state_t state) { return state; }

layer_state_t default_layer_state_set_user(layer_state_t state) { return state; }

void suspend_power_down_user(void) {
    oled_off();
    rgb_matrix_set_suspend_state(true);
}

void suspend_wakeup_init_user(void) {
    oled_on();
    rgb_matrix_set_suspend_state(false);
}

/* https://docs.qmk.fm/#/feature_rgb_matrix?id=ws2812 */
extern led_config_t g_led_config;

void xzr_underglow(uint8_t hue, uint8_t sat, uint8_t val) {
    HSV hsv = {hue, sat, val};
    if (hsv.v > rgb_matrix_config.hsv.v) {
        hsv.v = rgb_matrix_config.hsv.v;
    }

    RGB rgb = hsv_to_rgb(hsv);
    for (uint8_t i = 0; i < DRIVER_LED_TOTAL; i++) {
        if (HAS_FLAGS(g_led_config.flags[i], LED_FLAG_UNDERGLOW)) {
            rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
        }
    }
}

/* https://docs.qmk.fm/#/feature_rgb_matrix */
void rgb_matrix_indicators_user(void) {
    switch (get_highest_layer(layer_state)) {
        case xzr_layer_base:
            xzr_underglow(HSV_OFF);
            break;
        case xzr_layer_signs:
            xzr_underglow(HSV_BLUE);
            break;
        case xzr_layer_movenum:
            xzr_underglow(HSV_GREEN);
            break;
        case xzr_layer_fkeys:
            xzr_underglow(HSV_TEAL);
            break;
        case xzr_layer_mousemedia:
            xzr_underglow(HSV_GOLD);
            break;
        case xzr_layer_special:
            xzr_underglow(HSV_RED);
            break;
        default:
            xzr_underglow(HSV_WHITE);
            break;
    }
}

void render_bootmagic_status(bool status) {
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }

void render_space(void) { oled_write_P(PSTR("     "), false); }

void render_mod_status_gui_alt(uint8_t modifiers) {
    static const char PROGMEM gui_off_1[] = {0x85, 0x86, 0};
    static const char PROGMEM gui_off_2[] = {0xa5, 0xa6, 0};
    static const char PROGMEM gui_on_1[]  = {0x8d, 0x8e, 0};
    static const char PROGMEM gui_on_2[]  = {0xad, 0xae, 0};

    static const char PROGMEM alt_off_1[] = {0x87, 0x88, 0};
    static const char PROGMEM alt_off_2[] = {0xa7, 0xa8, 0};
    static const char PROGMEM alt_on_1[]  = {0x8f, 0x90, 0};
    static const char PROGMEM alt_on_2[]  = {0xaf, 0xb0, 0};

    // fillers between the modifier icons bleed into the icon frames
    static const char PROGMEM off_off_1[] = {0xc5, 0};
    static const char PROGMEM off_off_2[] = {0xc6, 0};
    static const char PROGMEM on_off_1[]  = {0xc7, 0};
    static const char PROGMEM on_off_2[]  = {0xc8, 0};
    static const char PROGMEM off_on_1[]  = {0xc9, 0};
    static const char PROGMEM off_on_2[]  = {0xca, 0};
    static const char PROGMEM on_on_1[]   = {0xcb, 0};
    static const char PROGMEM on_on_2[]   = {0xcc, 0};

    if (modifiers & MOD_MASK_GUI) {
        oled_write_P(gui_on_1, false);
    } else {
        oled_write_P(gui_off_1, false);
    }

    if ((modifiers & MOD_MASK_GUI) && (modifiers & MOD_MASK_ALT)) {
        oled_write_P(on_on_1, false);
    } else if (modifiers & MOD_MASK_GUI) {
        oled_write_P(on_off_1, false);
    } else if (modifiers & MOD_MASK_ALT) {
        oled_write_P(off_on_1, false);
    } else {
        oled_write_P(off_off_1, false);
    }

    if (modifiers & MOD_MASK_ALT) {
        oled_write_P(alt_on_1, false);
    } else {
        oled_write_P(alt_off_1, false);
    }

    if (modifiers & MOD_MASK_GUI) {
        oled_write_P(gui_on_2, false);
    } else {
        oled_write_P(gui_off_2, false);
    }

    if (modifiers & MOD_MASK_GUI & MOD_MASK_ALT) {
        oled_write_P(on_on_2, false);
    } else if (modifiers & MOD_MASK_GUI) {
        oled_write_P(on_off_2, false);
    } else if (modifiers & MOD_MASK_ALT) {
        oled_write_P(off_on_2, false);
    } else {
        oled_write_P(off_off_2, false);
    }

    if (modifiers & MOD_MASK_ALT) {
        oled_write_P(alt_on_2, false);
    } else {
        oled_write_P(alt_off_2, false);
    }
}

void render_mod_status_ctrl_shift(uint8_t modifiers) {
    static const char PROGMEM ctrl_off_1[] = {0x89, 0x8a, 0};
    static const char PROGMEM ctrl_off_2[] = {0xa9, 0xaa, 0};
    static const char PROGMEM ctrl_on_1[]  = {0x91, 0x92, 0};
    static const char PROGMEM ctrl_on_2[]  = {0xb1, 0xb2, 0};

    static const char PROGMEM shift_off_1[] = {0x8b, 0x8c, 0};
    static const char PROGMEM shift_off_2[] = {0xab, 0xac, 0};
    static const char PROGMEM shift_on_1[]  = {0xcd, 0xce, 0};
    static const char PROGMEM shift_on_2[]  = {0xcf, 0xd0, 0};

    // fillers between the modifier icons bleed into the icon frames
    static const char PROGMEM off_off_1[] = {0xc5, 0};
    static const char PROGMEM off_off_2[] = {0xc6, 0};
    static const char PROGMEM on_off_1[]  = {0xc7, 0};
    static const char PROGMEM on_off_2[]  = {0xc8, 0};
    static const char PROGMEM off_on_1[]  = {0xc9, 0};
    static const char PROGMEM off_on_2[]  = {0xca, 0};
    static const char PROGMEM on_on_1[]   = {0xcb, 0};
    static const char PROGMEM on_on_2[]   = {0xcc, 0};

    if (modifiers & MOD_MASK_CTRL) {
        oled_write_P(ctrl_on_1, false);
    } else {
        oled_write_P(ctrl_off_1, false);
    }

    if ((modifiers & MOD_MASK_CTRL) && (modifiers & MOD_MASK_SHIFT)) {
        oled_write_P(on_on_1, false);
    } else if (modifiers & MOD_MASK_CTRL) {
        oled_write_P(on_off_1, false);
    } else if (modifiers & MOD_MASK_SHIFT) {
        oled_write_P(off_on_1, false);
    } else {
        oled_write_P(off_off_1, false);
    }

    if (modifiers & MOD_MASK_SHIFT) {
        oled_write_P(shift_on_1, false);
    } else {
        oled_write_P(shift_off_1, false);
    }

    if (modifiers & MOD_MASK_CTRL) {
        oled_write_P(ctrl_on_2, false);
    } else {
        oled_write_P(ctrl_off_2, false);
    }

    if (modifiers & MOD_MASK_CTRL & MOD_MASK_SHIFT) {
        oled_write_P(on_on_2, false);
    } else if (modifiers & MOD_MASK_CTRL) {
        oled_write_P(on_off_2, false);
    } else if (modifiers & MOD_MASK_SHIFT) {
        oled_write_P(off_on_2, false);
    } else {
        oled_write_P(off_off_2, false);
    }

    if (modifiers & MOD_MASK_SHIFT) {
        oled_write_P(shift_on_2, false);
    } else {
        oled_write_P(shift_off_2, false);
    }
}

void render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {0x80, 0x81, 0x82, 0x83, 0x84, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0};
    oled_write_P(crkbd_logo, false);
    oled_write_P(PSTR("crkbd"), false);
}

void render_layer_state(void) {
    static const char PROGMEM default_layer[] = {0x20, 0x94, 0x95, 0x96, 0x20, 0x20, 0xb4, 0xb5, 0xb6, 0x20, 0x20, 0xd4, 0xd5, 0xd6, 0x20, 0};
    static const char PROGMEM raise_layer[]   = {0x20, 0x97, 0x98, 0x99, 0x20, 0x20, 0xb7, 0xb8, 0xb9, 0x20, 0x20, 0xd7, 0xd8, 0xd9, 0x20, 0};
    static const char PROGMEM lower_layer[]   = {0x20, 0x9a, 0x9b, 0x9c, 0x20, 0x20, 0xba, 0xbb, 0xbc, 0x20, 0x20, 0xda, 0xdb, 0xdc, 0x20, 0};
    static const char PROGMEM adjust_layer[]  = {0x20, 0x9d, 0x9e, 0x9f, 0x20, 0x20, 0xbd, 0xbe, 0xbf, 0x20, 0x20, 0xdd, 0xde, 0xdf, 0x20, 0};
    if (layer_state_is(xzr_layer_signs)) {
        oled_write_P(lower_layer, false);
    } else if (layer_state_is(xzr_layer_movenum)) {
        oled_write_P(raise_layer, false);
    } else if (layer_state_is(xzr_layer_fkeys)) {
        oled_write_P(adjust_layer, false);
    } else if (layer_state_is(xzr_layer_mousemedia)) {
        oled_write_P(adjust_layer, false);
    } else if (layer_state_is(xzr_layer_special)) {
        oled_write_P(adjust_layer, false);
    } else {
        oled_write_P(default_layer, false);
    }
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        render_logo();
        render_space();
        render_layer_state();
        render_space();
        render_mod_status_gui_alt(get_mods() | get_oneshot_mods());
        render_mod_status_ctrl_shift(get_mods() | get_oneshot_mods());
    } else {
        render_logo();
        render_space();
        render_layer_state();
        render_space();
        render_mod_status_gui_alt(get_mods() | get_oneshot_mods());
        render_mod_status_ctrl_shift(get_mods() | get_oneshot_mods());
    }
}
