// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "jrecyclebin.h"

const key_override_t *key_overrides[] = {
    &delete_key_override,
    &semicolon_key_override
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,      KC_5,
        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,      KC_MINS,

        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,      KC_T,
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,      KC_BSPC,

        KC_LOPT, KC_A,    KC_S,    KC_D,    KC_F,      KC_G,
        KC_H,    KC_J,    KC_K,    KC_L,    LSFT(KC_SCLN),   KC_QUOT,

        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,      KC_B,
        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   KC_BSLS,

        KC_LCTL,        MO(1),                 KC_SPC,
        KC_ENT,         MT(MOD_LGUI, KC_LBRC), LT(2, KC_RBRC)
    ),
    [1] = LAYOUT(
        KC_GRV,       KC_F1,   KC_F2,   KC_F3,   KC_F4,     KC_F5,
        KC_F6,        KC_F7,   KC_F8,   KC_F9,   KC_F10,    KC_EQL,

        C(A(KC_DEL)), KC_WBAK, KC_WHOM, KC_WREF, KC_WFWD,   TG(3),
        KC_HOME,      KC_PGDN, KC_PGUP, KC_END,  KC_PSCR,   KC_DEL,

        KC_TRNS,      KC_F13,  KC_F14,  KC_F15,  KC_F16,    KC_F17,
        KC_LEFT,      KC_DOWN, KC_UP,   KC_RGHT, KC_INS,    QK_BOOT,

        KC_TRNS,      KC_F18,  KC_F19,  KC_F20,  TG(3),     C(A(KC_END)),
        KC_MPLY,      KC_MUTE, KC_MPRV, KC_MNXT, KC_VOLD,   KC_VOLU,

        KC_TRNS,      KC_TRNS, KC_APP,
        KC_TRNS,      KC_F11,  KC_F12
    ),
    [2] = LAYOUT(
        QK_GESC, EMOJI_TADA, KC_2, KC_3, KC_4, KC_5,
        EMOJI_HAND_THUMB_UP, EMOJI_HAND_THUMB_DOWN, EMOJI_SMILE,
          EMOJI_NINE, EMOJI_CLOWN, EMOJI_NEUTRAL_FACE,

        DANCER, EMOJI_QUIET, EMOJI_WOWEE, EMOJI_ERNIE, EMOJI_REDONK, EMOJI_TIGHT,
        EMOJI_YIKES, EMOJI_UH, EMOJI_JABSCO, EMOJI_FROG_OOO, EMOJI_POOP, KC_BSPC,

        KC_LOPT, EMOJI_FROG_AAH, EMOJI_FROG_SAD, EMOJI_DAMN, EMOJI_FROG, EMOJI_GOOD_GAME,
        EMOJI_HI_WAVE, EMOJI_JOY, EMOJI_KILLED, EMOJI_LOVE, EMOJI_SMILE, EMOJI_ATTN,

        KC_LSFT, EMOJI_ZZZ, EMOJI_EXIT, EMOJI_CRIKEY, EMOJI_VICTORY, EMOJI_BIRDIE,
        EMOJI_NO, EMOJI_MMM, EMOJI_POINT_LEFT, EMOJI_POINT_RIGHT, EMOJI_DAFUQ, EMOJI_FIRE,

        KC_LCTL, EMOJI_ATTN, KC_TRNS,
        KC_TRNS, MOD_LGUI, KC_RBRC
    ),
    [3] = LAYOUT(
        TG(3),   JPH_NU, JPH_FU, JPH_A,  JPH_U,  JPH_E,
        JPH_O,   JPH_YA, JPH_YU, JPH_YO, JPH_WA, JPH_HO,

        KC_TRNS, JPH_TA,  JPH_TE, JPH_I,   JPH_SU, JPH_KA,
        JPH_N,   JPH_NA,  JPH_NI, JPH_RA,  JPH_SE, KC_TRNS,

        KC_TRNS, JPH_CHI, JPH_TO, JPH_SHI, JPH_HA, JPH_KI,
        JPH_KU,  JPH_MA,  JPH_NO, JPH_RI,  JPH_RE, JPH_KE,

        KC_LSFT, JPH_TSU, JPH_SA, JPH_SO,  JPH_HI, JPH_KO,
        JPH_MI,  JPH_MO,  JPH_NE, JPH_RU,  JPH_ME, JPH_MU,

        KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, EMOJI_JABSCO, KC_TRNS
    ),
};
