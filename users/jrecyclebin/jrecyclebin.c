// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "jrecyclebin.h"

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t semicolon_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_COLN, KC_SCLN);

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DANCER:
            SEND_STRING(SS_LALT("D83D+DC83"));
            return false;
        EMOTE(UH);
        EMOTE(FROG);
        EMOTE(HI_WAVE);
        EMOTE(CRIKEY);
        EMOTE(DAMN);
        EMOTE(TIGHT);
        EMOTE(CLOWN);
        EMOTE(TADA);
        EMOTE(ZZZ);
        EMOTE(POINT_RIGHT);
        EMOTE(JOY);
        EMOTE(LOVE);
        EMOTE(KILLED);
        EMOTE(POINT_LEFT);
        EMOTE(QUIET);
        EMOTE(FROG_AAH);
        EMOTE(NO);
        EMOTE(HAND_THUMB_DOWN);
        EMOTE(HAND_THUMB_UP);
        EMOTE(JABSCO);
        EMOTE(FROG_OOO);
        EMOTE(NINE);
        EMOTE(BIRDIE);
        EMOTE(MMM);
        EMOTE(FIRE);
        EMOTE(DAFUQ);
        EMOTE(NEUTRAL_FACE);
        EMOTE(SMILE);
        EMOTE(POOP);
        EMOTE(ATTN);
        EMOTE(EXIT);
        EMOTE(REDONK);
        EMOTE(VICTORY);
        EMOTE(ERNIE);
        EMOTE(WOWEE);
        EMOTE(YIKES);
        EMOTE(GOOD_GAME);
        EMOTE(HAND_CLAP);
        EMOTE(FROG_SAD);
    }
    return true;
}
