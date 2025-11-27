I recently switched to a [Silakka54](/Squalius-cephalus/silakka54). Having fun
with layers - I wondered: could I make an 	𝔼𝕄𝕆𝕁𝕀 𝕃𝔸𝕐𝔼ℝ??

No - I didn't do any text. But you certainly can.

> [!WARNING]
> I don't have Mac working. This just gets used on Linux and Windows.

# Your Own Emoji Layer

Why do this needless thing? (눈_눈) Because I love having a keyboard that I can
plug in anywhere and suddenly it has all my customizations. Including this layer
full of common tiny faces and fingers.

I wanted, like, EmojiKey+Y to be 😅. (Yikes key.)

And kaomoji: wanted EmojiKey+Z to be (ᇂ_ᇂ|||).

And when I hold EmojiKey and do > 0 <, I get 👉🤡👈. Eventually will make this
more composable like that. Kind of the benefit of having an emoji layer where
you can just lay these things down willy-nilly. (Many kaomoji have great faces
that are just surrounded by parens - no point putting the parens in.)

For me, EmojiKey happens when holding the right square bracket key. It's a tap
or hold key - square bracket if I tap, EmojiKey if I hold. (Right thumb
key #3.) But you can just assign keys in keymap.c for your specific keyboard.
Everything is kept in my user folder so I can just pull these macros into other
layouts.

> [!NOTE]
> Actually realized that I had to dip into QMK anyway, in order to swap colon
> and semicolon. Kind of crazy that Vial couldn't handle it. Next thing I
> knew... went all the way on this.

Since this is only used on Linux and Windows, I decided to use
[IBus](https://github.com/ibus/ibus). Which works natively on Linux. And then I
use WinCompose on Windows - since it has an option called *Advanced Unicode
input* that works just like IBus. (I set the Compose Key to **Right Control**
which isn't mapped to any key on my keyboard. More on IBus in the final step
below.)

## 1. Setup QMK

You'll be building custom QMK firmware. So you'll need to follow the [QMK setup
guide](https://docs.qmk.fm/newbs_getting_started), right down to getting your
own user and keymap setup:

```bash
$ qmk config user.keymap=<github_username>
$ qmk new-keymap -kb <keyboard>
```

You can then copy over my source code in
[users/jrecyclebin](https://github.com/jrecyclebin/emojilayer/tree/main/users/jrecyclebin)
to your new user directory. The important stuff is in `emotes.h` but you'll need
to the other things in there - defining custom keys for each emoji and adding
keycode handlers to the `process_record_user` function.

## 2. Gather Codes

Ok, now ya gotta track down the proper codes. Some resources:

* [Emoji-List-Unicode](https://github.com/Fantantonio/Emoji-List-Unicode): Code in
  the second column.
* [Emoji Unicode Tables](https://apps.timwhitlock.info/emoji/tables/unicode):
  Similar page - **Unicode** column. (So "winking face" code is 1f609.)
* You can just let an LLM do it. I told GLM 4.6 to add the Hiragana and Katakana
  to emotes.h (and to follow my same IBUS_MACRO strategy and naming convention)
  and that resulted in the character entries you see there. You could probably
  give it emoji friendly names or descriptions of specific kaomoji and it'll do
  it. ("Add a kaomoji shrug to emotes.h" is bound to do exactly what you imagine.)
* I have a copy of my tool for converting to codes in the
  [/web](https://github.com/jrecyclebin/emojilayer/tree/main/web) directory of
  this repo.

You will need to put those codes in IBUS_MACRO calls. You can just put each
character you need in quotes as a hex code.

```c
IBUS_MACRO("ca0");
IBUS_MACRO("5f");
IBUS_MACRO("ca0");
```

## 3. Add to emotes.h

Time to put those IBUS_MACRO entries in `emotes.h` as their own
macro-of-macros. Give it a name and throw it all in there like the other
entries. (You can put it all on one line to avoid needing backslashed
newlines.)

```c
#define EMOTE_CRIKEY()      \
{                       \
    IBUS_MACRO("28");   \
    IBUS_MACRO("ff1b"); \
    IBUS_MACRO("ffe3"); \
    IBUS_MACRO("3c9");  \
    IBUS_MACRO("ffe3"); \
    IBUS_MACRO("29");   \
}
```

Create one of those for every emote you're adding.

## 4. Add Custom Keycodes

I have this in `users/jrecyclebin/jrecyclebin.h`. You likely need custom
keycodes to represent each emote in your keymapping.

```c
enum custom_keycodes {
  EMOJI_DANCER = SAFE_RANGE,
  EMOJI_CRIKEY,
  // ... etc.
}
```

Give each key a name that matches the EMOTE macro you made.

## 5. Add Keycode Handler

I have an `EMOTE()` macro for doing this - pairs up `EMOJI_NAME` with
`EMOTE_NAME()` when it gets pressed. You can look at
`users/jrecyclebin/jrecyclebin.c` for this.

```c
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        EMOTE(DANCER);
	EMOTE(CRIKEY);
	// ... etc
    }
    return true;
}
```

Now everything is setup to hook up a new custom key to a new custom IBus macro -
you just need to include this stuff in your keymap and actually map the key.

## 6. Map the Keys

This is the only part that really goes in the keyboard-specific `keymap.c`. You
can basically just plop your keycodes in there and keys will start printing
emojis. However, let me just also show you how to add a layer and a tap-hold
key.

My tap hold key uses the keycode `LT(2, KC_RBRC)` - this means that if I tap,
the key I get a right bracket. If I hold, then layer 2 is active. My layer 2 is
all emoji.

Also note that I have `KC_LCTL` (left control) bound but not right control. This
is so that WinCompose can use right control. The Silakka is too small to have a
second control key anyway.

The emoji layer itself looks like:

```c
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
```

You'll have to figure out the key order, but this is basically top-to-bottom,
left-to-right. Good to leave shift as shift - you could potentially have a shift
layer as well - check out how I did the kana layers to see how you could have
multiple layers by just naming the shift layer after the unshifted layer.

## 7. Compile and Flash

K, let's find out.

```bash
$ qmk compile
```

Then I hit my KC_BOOT key - which puts the Silakka in flash mode - connect to it
as a USB drive and copy the file (`silakka54_jrecyclebin.uf2`) to the drive.
It'll cycle itself and we're in business.

> [!INFO]
> Incidentally, the Silakka (and other split keyboards like Lily58 or Corne) is
> great for this stuff because it has two RP2040s - one on each side. So if I
> end up with a keymap that is totally screwed, I can just plug into the other
> side (that's flashed with a previous working keymap) to regain keyboard
> control until I can get the new keymap fixed and flashed.

Now to make the emotes layer work in Fortnite. ᕕ( ᐛ )ᕗ
