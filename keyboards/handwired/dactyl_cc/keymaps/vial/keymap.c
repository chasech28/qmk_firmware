#include QMK_KEYBOARD_H

#define OS_TG TG(_MAC)

// Layer declarations
enum layers {
    _BASE, // default layer
    _MAC,
    _CODE,
};

// Tap Dance declarations
enum {
    TD_ESC_CAPS,
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        // left hand
        KC_GRV,          KC_1,            KC_2,    KC_3,  KC_4,    KC_5,
        KC_TAB,          KC_Q,            KC_W,    KC_E,  KC_R,    KC_T,
        TD(TD_ESC_CAPS), KC_A, LT(_CODE, KC_S),    KC_D,  KC_F,    KC_G,
        KC_LSFT,         KC_Z,            KC_X,    KC_C,  KC_V,    KC_B,
                         KC_LEFT,         KC_DOWN, KC_UP, KC_RGHT,
                                                                                       KC_DEL,  KC_INS,
                                                                              KC_BSPC, KC_LCTL, KC_LGUI,
                                                                                                KC_LALT,

        // right hand
                                  KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_F1,
                                  KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_BSLS,
                                  KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
                                  KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                                  KC_MINS, KC_EQL, KC_LBRC, KC_RBRC,
        KC_HOME, KC_RCTL,
        KC_END,  RCTL_T(KC_ENT),  KC_SPC,
        KC_RALT
    ),
    [_MAC] = LAYOUT(
        // left hand
        KC_GRV,          KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_TAB,          KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,
        TD(TD_ESC_CAPS), KC_A,    KC_S,    KC_D,    KC_F,    LT(_CODE, KC_G),
        KC_LSFT,         KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,
                         KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
                                                                                       KC_DEL,  KC_INS,
                                                                              KC_BSPC, KC_LCMD, KC_LCTL,
                                                                                                KC_LOPT,

        // right hand
                                  KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_F1,
                                  KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_BSLS,
                                  KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
                                  KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                                  KC_MINS, KC_EQL, KC_LBRC, KC_RBRC,
        KC_HOME, KC_RCMD,
        KC_END,  RCMD_T(KC_ENT),  KC_SPC,
        KC_ROPT
    ),
    [_CODE] = LAYOUT(
        // left hand
        QK_BOOT, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,
                 _______, _______, _______, _______,
                                                                       KC_DEL,  KC_INS,
                                                              KC_BSPC, KC_LCTL, KC_LGUI,
                                                                                KC_LALT,

        // right hand
                                  _______, _______, _______, _______, _______, _______,
                                  _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______,
                                  _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______,
                                  _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,
                                  _______, _______, _______, _______,
        KC_HOME, KC_RCTL,
        KC_END,  RCTL_T(KC_ENT),  KC_SPC,
        KC_RALT
    ),
};
