#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  MAC_MISSION_CONTROL,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TD(DANCE_0),    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),                                    TD(DANCE_4),    TD(DANCE_5),    TD(DANCE_6),    KC_O,           KC_P,           KC_EQUAL,       
    MO(1),          MT(MOD_LSFT, KC_A),MT(MOD_LCTL, KC_S),MT(MOD_LALT, KC_D),MT(MOD_LGUI, KC_F),ALL_T(KC_G),                                    ALL_T(KC_H),    MT(MOD_LGUI, KC_J),MT(MOD_LALT, KC_K),MT(MOD_LCTL, KC_L),MT(MOD_RSFT, KC_SCLN),KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
                                                    LT(3,KC_BSPC),  MO(2),                                          LT(4,KC_ENTER), KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_TILD,        KC_LPRN,                                        KC_RPRN,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_BOOT,        
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_GRAVE,       KC_LCBR,                                        KC_RCBR,        KC_QUOTE,       TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    KC_NO,          
    KC_TRANSPARENT, KC_NO,          OSM(MOD_LCTL),  OSM(MOD_LALT),  OSM(MOD_LGUI),  KC_LBRC,                                        KC_RBRC,        KC_PIPE,        TD(DANCE_10),   TD(DANCE_11),   TD(DANCE_12),   KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_SLASH,       KC_LABK,                                        KC_RABK,        KC_BSLS,        KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    TO(4),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TO(3),                                          ST_MACRO_1,     ST_MACRO_2,     LALT(LCTL(KC_ENTER)),KC_NO,          KC_NO,          QK_BOOT,        
    KC_NO,          KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          OSM(MOD_MEH),                                   KC_PAGE_UP,     KC_HOME,        TD(DANCE_13),   KC_END,         KC_ESCAPE,      KC_NO,          
    KC_NO,          ST_MACRO_0,     KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    OSM(MOD_HYPR),                                  KC_PGDN,        TD(DANCE_14),   TD(DANCE_15),   TD(DANCE_16),   KC_DELETE,      KC_NO,          
    KC_TRANSPARENT, KC_MAC_UNDO,    KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,   MAC_MISSION_CONTROL,                                ST_MACRO_3,     ST_MACRO_4,     LALT(LCTL(LSFT(KC_DOWN))),KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_NO,          KC_TRANSPARENT,                                 TD(DANCE_17),   CW_TOGG
  ),
  [3] = LAYOUT_voyager(
    TO(0),          KC_NO,          KC_F12,         KC_F11,         KC_F10,         KC_NO,                                          KC_NO,          KC_NO,          KC_KP_SLASH,    KC_KP_ASTERISK, KC_KP_MINUS,    KC_NO,          
    KC_NO,          KC_ESCAPE,      KC_F9,          KC_F8,          KC_F7,          KC_NO,                                          KC_NO,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_NO,          
    KC_NO,          KC_NO,          KC_F6,          KC_F5,          KC_F4,          KC_NO,                                          KC_NO,          KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_DOT,      KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_F3,          KC_F2,          KC_F1,          KC_NO,                                          KC_KP_0,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_ENTER,    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    TO(0),          RGB_TOG,        RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {81,225,215}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {17,219,214}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157}, {162,212,157} },

    [1] = { {162,212,157}, {0,0,0}, {0,0,0}, {0,0,0}, {81,225,215}, {81,225,215}, {162,212,157}, {0,0,0}, {0,0,0}, {0,0,0}, {81,225,215}, {81,225,215}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {81,225,215}, {162,212,157}, {0,0,0}, {0,0,0}, {0,0,0}, {81,225,215}, {81,225,215}, {162,212,157}, {162,212,157}, {81,225,215}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {81,225,215}, {81,225,215}, {17,219,214}, {17,219,214}, {17,219,214}, {0,0,0}, {81,225,215}, {81,225,215}, {17,219,214}, {17,219,214}, {17,219,214}, {0,0,0}, {81,225,215}, {81,225,215}, {0,0,0}, {0,0,0}, {0,0,0}, {162,212,157}, {162,212,157}, {162,212,157} },

    [2] = { {0,255,226}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {38,220,213}, {0,0,0}, {81,225,215}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,226}, {81,225,215}, {81,225,215}, {81,225,215}, {0,0,0}, {162,212,157}, {38,220,213}, {38,220,213}, {38,220,213}, {38,220,213}, {0,218,204}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {17,219,214}, {0,0,0}, {0,0,0}, {0,0,255}, {81,225,215}, {81,225,215}, {17,219,214}, {81,225,215}, {81,225,215}, {0,0,0}, {81,225,215}, {17,219,214}, {17,219,214}, {17,219,214}, {81,225,215}, {0,0,0}, {0,218,204}, {0,218,204}, {17,219,214}, {0,0,0}, {0,0,0}, {162,212,157}, {162,212,157}, {162,212,157} },

    [3] = { {81,225,215}, {0,0,0}, {38,220,213}, {38,220,213}, {38,220,213}, {0,0,0}, {0,0,0}, {81,225,215}, {38,220,213}, {38,220,213}, {38,220,213}, {0,0,0}, {0,0,0}, {0,0,0}, {38,220,213}, {38,220,213}, {38,220,213}, {0,0,0}, {162,212,157}, {0,0,0}, {38,220,213}, {38,220,213}, {38,220,213}, {0,0,0}, {162,212,157}, {162,212,157}, {0,0,0}, {0,0,0}, {38,220,213}, {38,220,213}, {38,220,213}, {0,0,0}, {0,0,0}, {38,220,213}, {38,220,213}, {38,220,213}, {38,220,213}, {0,0,0}, {0,0,0}, {38,220,213}, {38,220,213}, {38,220,213}, {38,220,213}, {0,0,0}, {38,220,213}, {38,220,213}, {38,220,213}, {38,220,213}, {38,220,213}, {162,212,157}, {162,212,157}, {162,212,157} },

    [4] = { {81,225,215}, {130,225,215}, {130,225,215}, {130,225,215}, {130,225,215}, {130,225,215}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
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
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCLN) SS_DELAY(100) SS_TAP(X_SCLN) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_G));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SCLN) SS_DELAY(100) SS_TAP(X_SCLN) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_G));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_CTRL) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_CTRL) SS_DELAY(100) SS_TAP(X_LEFT_SHIFT) SS_DELAY(100) SS_TAP(X_TAB));
    }
    break;
    case MAC_MISSION_CONTROL:
      HCS(0x29F);

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[18];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_E);
        tap_code16(KC_E);
        tap_code16(KC_E);
    }
    if(state->count > 3) {
        tap_code16(KC_E);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_E); break;
        case SINGLE_HOLD: register_code16(KC_LCBR); break;
        case DOUBLE_TAP: register_code16(KC_E); register_code16(KC_E); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_E); register_code16(KC_E);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_E); break;
        case SINGLE_HOLD: unregister_code16(KC_LCBR); break;
        case DOUBLE_TAP: unregister_code16(KC_E); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_E); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_R);
        tap_code16(KC_R);
        tap_code16(KC_R);
    }
    if(state->count > 3) {
        tap_code16(KC_R);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_R); break;
        case SINGLE_HOLD: register_code16(KC_RCBR); break;
        case DOUBLE_TAP: register_code16(KC_R); register_code16(KC_R); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_R); register_code16(KC_R);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_R); break;
        case SINGLE_HOLD: unregister_code16(KC_RCBR); break;
        case DOUBLE_TAP: unregister_code16(KC_R); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_R); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_T);
        tap_code16(KC_T);
        tap_code16(KC_T);
    }
    if(state->count > 3) {
        tap_code16(KC_T);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_T); break;
        case SINGLE_HOLD: register_code16(KC_LABK); break;
        case DOUBLE_TAP: register_code16(KC_T); register_code16(KC_T); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_T); register_code16(KC_T);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_T); break;
        case SINGLE_HOLD: unregister_code16(KC_LABK); break;
        case DOUBLE_TAP: unregister_code16(KC_T); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_T); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Y);
        tap_code16(KC_Y);
        tap_code16(KC_Y);
    }
    if(state->count > 3) {
        tap_code16(KC_Y);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_Y); break;
        case SINGLE_HOLD: register_code16(KC_RABK); break;
        case DOUBLE_TAP: register_code16(KC_Y); register_code16(KC_Y); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Y); register_code16(KC_Y);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_Y); break;
        case SINGLE_HOLD: unregister_code16(KC_RABK); break;
        case DOUBLE_TAP: unregister_code16(KC_Y); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Y); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_U);
        tap_code16(KC_U);
        tap_code16(KC_U);
    }
    if(state->count > 3) {
        tap_code16(KC_U);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_U); break;
        case SINGLE_HOLD: register_code16(KC_LBRC); break;
        case DOUBLE_TAP: register_code16(KC_U); register_code16(KC_U); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_U); register_code16(KC_U);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_U); break;
        case SINGLE_HOLD: unregister_code16(KC_LBRC); break;
        case DOUBLE_TAP: unregister_code16(KC_U); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_U); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_I);
        tap_code16(KC_I);
        tap_code16(KC_I);
    }
    if(state->count > 3) {
        tap_code16(KC_I);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_I); break;
        case SINGLE_HOLD: register_code16(KC_RBRC); break;
        case DOUBLE_TAP: register_code16(KC_I); register_code16(KC_I); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_I); register_code16(KC_I);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_I); break;
        case SINGLE_HOLD: unregister_code16(KC_RBRC); break;
        case DOUBLE_TAP: unregister_code16(KC_I); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_I); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_U)));
        tap_code16(LALT(LCTL(KC_U)));
        tap_code16(LALT(LCTL(KC_U)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_U)));
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_U))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_KP_7))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_U))); register_code16(LALT(LCTL(KC_U))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_U))); register_code16(LALT(LCTL(KC_U)));
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_U))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_KP_7))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_U))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_U))); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_I)));
        tap_code16(LALT(LCTL(KC_I)));
        tap_code16(LALT(LCTL(KC_I)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_I)));
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_I))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_KP_8))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_I))); register_code16(LALT(LCTL(KC_I))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_I))); register_code16(LALT(LCTL(KC_I)));
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_I))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_KP_8))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_I))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_I))); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_O)));
        tap_code16(LALT(LCTL(KC_O)));
        tap_code16(LALT(LCTL(KC_O)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_O)));
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_O))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_KP_9))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_O))); register_code16(LALT(LCTL(KC_O))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_O))); register_code16(LALT(LCTL(KC_O)));
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_O))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_KP_9))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_O))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_O))); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_J)));
        tap_code16(LALT(LCTL(KC_J)));
        tap_code16(LALT(LCTL(KC_J)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_J)));
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_J))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_KP_1))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_J))); register_code16(LALT(LCTL(KC_J))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_J))); register_code16(LALT(LCTL(KC_J)));
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_J))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_KP_1))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_J))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_J))); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_K)));
        tap_code16(LALT(LCTL(KC_K)));
        tap_code16(LALT(LCTL(KC_K)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_K)));
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_K))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_KP_2))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_K))); register_code16(LALT(LCTL(KC_K))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_K))); register_code16(LALT(LCTL(KC_K)));
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_K))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_KP_2))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_K))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_K))); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LCTL(KC_L)));
        tap_code16(LALT(LCTL(KC_L)));
        tap_code16(LALT(LCTL(KC_L)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LCTL(KC_L)));
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(LALT(LCTL(KC_L))); break;
        case SINGLE_HOLD: register_code16(LGUI(LSFT(KC_KP_3))); break;
        case DOUBLE_TAP: register_code16(LALT(LCTL(KC_L))); register_code16(LALT(LCTL(KC_L))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LCTL(KC_L))); register_code16(LALT(LCTL(KC_L)));
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(LALT(LCTL(KC_L))); break;
        case SINGLE_HOLD: unregister_code16(LGUI(LSFT(KC_KP_3))); break;
        case DOUBLE_TAP: unregister_code16(LALT(LCTL(KC_L))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LCTL(KC_L))); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_UP);
        tap_code16(KC_UP);
        tap_code16(KC_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_UP);
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_UP); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(KC_UP))); break;
        case DOUBLE_TAP: register_code16(KC_UP); register_code16(KC_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_UP); register_code16(KC_UP);
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_UP); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(KC_UP))); break;
        case DOUBLE_TAP: unregister_code16(KC_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_UP); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT);
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_LEFT); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(KC_LEFT))); break;
        case DOUBLE_TAP: register_code16(KC_LEFT); register_code16(KC_LEFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT); register_code16(KC_LEFT);
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(KC_LEFT))); break;
        case DOUBLE_TAP: unregister_code16(KC_LEFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_DOWN);
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_DOWN); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(KC_DOWN))); break;
        case DOUBLE_TAP: register_code16(KC_DOWN); register_code16(KC_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOWN); register_code16(KC_DOWN);
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_DOWN); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(KC_DOWN))); break;
        case DOUBLE_TAP: unregister_code16(KC_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOWN); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT);
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(KC_RIGHT))); break;
        case DOUBLE_TAP: register_code16(KC_RIGHT); register_code16(KC_RIGHT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT); register_code16(KC_RIGHT);
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(KC_RIGHT))); break;
        case DOUBLE_TAP: unregister_code16(KC_RIGHT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case SINGLE_HOLD: register_code16(KC_CAPS); break;
        case DOUBLE_TAP: register_code16(KC_ENTER); register_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case SINGLE_HOLD: unregister_code16(KC_CAPS); break;
        case DOUBLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[17].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
};
