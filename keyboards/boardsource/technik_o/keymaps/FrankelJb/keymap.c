/* Copyright 2022 Boardsource
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

enum custom_keycodes {
  CC_ARRW = SAFE_RANGE,
  CC_YGC, // Custom Code _ Yank Global Clipboard
};

enum planck_layers {
  _BASE,
  _LAYER1,
  _LAYER2,
  _LAYER3,
  _LAYER4,
  _LAYER5,
  _LAYER6,
  _LAYER7,
  _LAYER8,
};

#define L1_SPC LT(1, KC_SPC)
#define L2_TAB LT(2, KC_TAB)
#define L3_ESC LT(3, KC_ESC)
#define L4_BSPC LT(4, KC_BSPC)
#define L5_ENT LT(5, KC_ENT)
#define L6_DEL LT(6, KC_DEL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_ortho_4x12(
    XXXXXXX, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   XXXXXXX,
    XXXXXXX, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G,   KC_H,   LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), LGUI_T(KC_QUOT), XXXXXXX,
    XXXXXXX, KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,   KC_N,   KC_M,         KC_COMM,      KC_DOT,       KC_SLASH,        XXXXXXX,
    XXXXXXX, XXXXXXX,      XXXXXXX,      L3_ESC,       L1_SPC,       L2_TAB, L5_ENT, L4_BSPC,      L6_DEL,       XXXXXXX,      XXXXXXX,         XXXXXXX
  ),

  [_LAYER1] = LAYOUT_ortho_4x12(
    XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_UNDO, KC_CUT,  KC_COPY,KC_PSTE, KC_PSCR, XXXXXXX,
    XXXXXXX, KC_GRV,  KC_BSLS, KC_LCTL, KC_LGUI, KC_LALT, KC_LEFT, KC_DOWN, KC_UP,  KC_RGHT, KC_SCLN, XXXXXXX,
    XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BSLS, KC_HOME, KC_PGDN, KC_PGUP,KC_END,  XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ENT,  KC_BSPC, KC_DEL, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_LAYER2] = LAYOUT_ortho_4x12(
    XXXXXXX, KC_1,    KC_2,    KC_3,     KC_4,   KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
    XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, CC_YGC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CC_ARRW, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_LAYER3] = LAYOUT_ortho_4x12(
    XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN2, KC_BTN1, KC_BTN3, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_LAYER4] = LAYOUT_ortho_4x12(
    XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  XXXXXXX,
    XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX,
    XXXXXXX, KC_PMNS, KC_PEQL, KC_LBRC, KC_RBRC, KC_BSPC, XXXXXXX, XXXXXXX, KC_COMM, KC_DOT,  KC_PSLS, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC,  KC_SPC,  KC_TAB,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_LAYER5] = LAYOUT_ortho_4x12(
    XXXXXXX, KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC,
    XXXXXXX, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX,
    XXXXXXX, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_LAYER6] = LAYOUT_ortho_4x12(
    XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, KC_PIPE, KC_PMNS, KC_7,    KC_8,    KC_9,    KC_PLUS, XXXXXXX,
    XXXXXXX, KC_GRV,  KC_PIPE, KC_LCBR, KC_RCBR, KC_SCLN, KC_PEQL, KC_4,    KC_5,    KC_6,    XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, KC_DOT,  KC_0,    KC_1,    KC_2,    KC_3,    KC_SLSH, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),


  [_LAYER7] = LAYOUT_ortho_4x12(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),

  [_LAYER8] = LAYOUT_ortho_4x12(
    XXXXXXX, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_A,    XXXXXXX, XXXXXXX, KC_F,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_Z,    KC_X,    KC_C,    KC_V,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
//   rgblight_sethsv_noeeprom(0, 255, 255);
//   rgb_matrix_mode_noeeprom(RGB_MATRIX_JELLYBEAN_RAINDROPS);
//   rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
//   rgb_matrix_set_color_all(RGB_TEAL); // Default startup colour
}

const uint8_t PROGMEM solid_layers[] = {1, 2, 8};

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = {
        {94,0,255},{0,123,255},{0,255,60},{255,242,0},{255,0,0},
        {255,0,0},{255,242,0},{0,255,60},{0,123,255},{94,0,255},

        {255,0,0},{255,111,0},{255,217,0},{183,255,0},{77,255,0},{0,255,34},{0,255,140},{0,255,251},{0,153,255},{0,43,255},{64,0,255},{174,0,255},
        {255,26,0},{255,136,0},{255,242,0},{157,255,0},{47,255,0},{0,255,60},{0,255,170},{0,234,255},{0,123,255},{0,17,255},{94,0,255},{200,0,255},
        {255,55,0},{255,162,0},{238,255,0},{132,255,0},{21,255,0},{0,255,85},{0,255,196},{0,208,255},{0,98,255},{13,0,255},{119,0,255},{230,0,255},
        {255,81,0},{255,191,0},{213,255,0},{102,255,0},{0,255,4},{0,255,115},{0,255,221},{0,179,255},{0,72,255},{38,0,255},{145,0,255},{255,0,255}

    },

    [1] = { {255,0,0} },

    [2] = { {255,0,255} },

    [3] = {
        {255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},

        {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {255,255,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255},
    },

    [4] = {
        {255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},
        {0,0,0}, {255,255,0}, {255,255,0}, {255,255,0}, {255,255,0}, {255,255,0}, {255,255,0}, {255,255,0}, {255,255,0}, {255,255,0}, {255,255,0}, {255,255,0},
        {0,0,0}, {0,0,0}, {255,0,0}, {255,0,0}, {255,0,0}, {255,0,0}, {255, 0, 255}, {255, 0, 255}, {255, 0, 255}, {255, 0, 255}, {255,141,0}, {0, 0, 0},
        {0, 0, 0}, {0, 0, 0},  {0, 0, 0},  {255,141,0},  {0, 0, 0},  {0, 0, 0},  {0, 0, 0},  {0, 0, 0},  {0, 0, 0},  {0, 0, 0},  {0, 0, 0},  {0, 0, 0},
    },

    [5] = {
        {255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},{255,0,0},
        {0,0,0}, {0,0,0}, {0,0,0}, {255,0,0}, {255,0,0}, {251,0,255}, {251,0,255}, {255,221,0}, {255,221,0}, {255,221,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,255,0}, {0,255,0}, {251,0,255}, {251,0,255}, {255,170,0}, {255,170,0}, {255,170,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0},
        {0,0,0}, {0,0,255}, {0,0,255}, {251,0,255}, {251,170,0}, {255,170,0}, {255,170,0}, {255,170,0},
    },

    [8] = { {255,255,0} },

};

void set_layer_color(int layer) {
    bool contains = false;
    for (int i = 0; i < SOLID_LAYERS_LENGTH; i++) {
        if (layer == solid_layers[i]) {
            contains = true;
            break;
        }
    }
    if(contains) {
        RGB rgb = {
            .r = pgm_read_byte(&ledmap[layer][0][0]),
            .g = pgm_read_byte(&ledmap[layer][0][1]),
            .b = pgm_read_byte(&ledmap[layer][0][2]),
        };
        // HSV hsv = {
        //     .h = pgm_read_byte(&ledmap[layer][0][0]),
        //     .s = pgm_read_byte(&ledmap[layer][0][1]),
        //     .v = pgm_read_byte(&ledmap[layer][0][2]),
        // };
        // RGB rgb = hsv_to_rgb( hsv );
        float f = (float)10 / UINT8_MAX;
        rgb_matrix_set_color_all( f * rgb.r, f * rgb.g, f * rgb.b );
    }
    else {
        for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
            RGB rgb = {
                .r = pgm_read_byte(&ledmap[layer][i][0]),
                .g = pgm_read_byte(&ledmap[layer][i][1]),
                .b = pgm_read_byte(&ledmap[layer][i][2]),
            };
            // HSV hsv = {
            //     .h = pgm_read_byte(&ledmap[layer][i][0]),
            //     .s = pgm_read_byte(&ledmap[layer][i][1]),
            //     .v = pgm_read_byte(&ledmap[layer][i][2]),
            // };
            // if (!hsv.h && !hsv.s && !hsv.v) {
            //     rgb_matrix_set_color( i, 0, 0, 0 );
            // } else {
            //     RGB rgb = hsv_to_rgb( hsv );
                float f = (float)10 / UINT8_MAX;
            rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
            // }
        }
    }
}

bool rgb_matrix_indicators_user(void) {
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_mode(RGB_MATRIX_JELLYBEAN_RAINDROPS);
    //   rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static bool tAuNtTeXt = false;

  if (tAuNtTeXt) {
      if (record->event.pressed) {
          if (keycode != KC_SPC) {
              register_code(KC_CAPS);
              unregister_code(KC_CAPS);
          }
      }
  }

  switch (keycode) {
    case CC_YGC:
        if (record->event.pressed) {
            SEND_STRING(SS_LSFT(SS_TAP(X_QUOTE)) SS_DELAY(100) SS_TAP(X_KP_PLUS) SS_DELAY(100) SS_TAP(X_Y));
        }
        break;
    case CC_ARRW:
        if (record->event.pressed) {
            uint8_t mods = get_mods();
            if (mods & MOD_MASK_SHIFT) {
                del_mods(MOD_MASK_SHIFT);
                SEND_STRING("=>");
                set_mods(mods);
            } else {
                SEND_STRING("->");
            }
        }
        break;
    }
    return true;
}

// layer_state_t layer_state_set_user(layer_state_t state) {
    // return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }
