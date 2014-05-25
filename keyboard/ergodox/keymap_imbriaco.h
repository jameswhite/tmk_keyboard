static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * Keymap: Default Layer in QWERTY
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   =    |   1  |   2  |   3  |   4  |   5  | ESC  |           |   -  |   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  _   |           | FN1  |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LCtrl  |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------| FN0  |           | FN2  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | FN0  |  `   |  \   | Left | Right|                                       |  Up  |  Dn  | LBrc | RBrc | RGui |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | LGui | LAlt |       | Ralt | L1   |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | Home |       | WH_U |      |      |
 *                                 | BkSp |  ESC |------|       |------| Enter| Space|
 *                                 |      |      |  End |       | WH_D |      |      |
 *                                 `--------------------'       `--------------------'
 *
 *
 */

    KEYMAP(  // layer 0 : default
        // left hand
       EQL,  1,   2,   3,   4,   5,   ESC,
       FN5,  Q,   W,   E,   R,   T,   FN2,
       LCTRL,A,   S,   D,   F,   G,
       LSFT, Z,   X,   C,   V,   B,   FN0,
       FN0,  GRV, BSLS,LEFT,RGHT,
                                      LGUI,LALT,
                                           HOME,
                                 BSPC,DEL, END,
        // right hand
             FN4, 6,  7,  8,   9,   0,   MINS,
             FN1, Y,  U,  I,   O,   P,   BSLS,
                  H,  J,  K,   L,   SCLN,QUOT,
             FN2, N,  M,  COMM,DOT, SLSH,RSFT,
                      UP, DOWN,LBRC,RBRC,RGUI,
        RALT,RCTL,
        WH_U,
        WH_D, ENT, SPC
    ),

    KEYMAP(  // layer 1 : function and numbervvvvvcc keys
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  F6,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN4,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F7,  F8,  F9,  F10, F11, F12, TRNS,
             TRNS,TRNS,P7,  P8,  P9,  PMNS,TRNS,
                  PAST,P4,  P5,  P6,  PPLS,TRNS,
             TRNS,PSLS,P1,  P2,  P3,  PENT,TRNS,
                       P0,  P0, DEL,  PENT,TRNS,
        TRNS,TRNS,
        TRNS,
        FN3, TRNS,TRNS
    ),

    KEYMAP(  // layer 2 : media layer
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,MUTE,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,VOLU,
        TRNS,MPRV,MNXT,MSTP,MPLY,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,VOLD,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layer 3: numpad
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             SLCK,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             TRNS,NO,  P7,  P8,  P9,  PMNS,BSPC,
                  NO,  P4,  P5,  P6,  PPLS,PENT,
             TRNS,NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

};


/* id for user defined functions & macros */
enum function_id {
    TEENSY_KEY,
    COPY_KEY,
    PASTE_KEY
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),                      // FN0  - Activate Layer 1
    [1] = ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_LBRC),  // FN1 = CMD + Shift + [
    [2] = ACTION_MODS_KEY(MOD_LGUI | MOD_LSFT, KC_RBRC),  // FN2 - CMD + Shift + ]
    [3] = ACTION_FUNCTION(TEENSY_KEY),                    // FN3 - Teensy Key
    [4] = ACTION_LAYER_MOMENTARY(2),                      // FN4 - Media Layer
    [5] = ACTION_MODS_TAP_KEY(MOD_LGUI, KC_TAB),          // FN5 - Tab on tap, LGui on hold
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(50);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

#define FN_ACTIONS_SIZE     (sizeof(fn_actions)   / sizeof(fn_actions[0]))

/*
 * translates Fn keycode to action
 * for some layers, use different translation table
 */
action_t keymap_fn_to_action(uint8_t keycode)
{
    action_t action;
    action.code = ACTION_NO;

    // by default, use fn_actions from default layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}
