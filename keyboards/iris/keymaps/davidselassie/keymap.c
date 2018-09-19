#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1

#define LOWER MO(_LOWER)
#define CTL_ESC CTL_T(KC_ESC)
#define ALT_TAB ALT_T(KC_TAB)

// http://www.keyboard-layout-editor.com/#/gists/144b278919b7b5a09d881c0791665199
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_MUTE ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                           KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MPLY ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_EQL  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,                           KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_MINS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_DEL  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,                           KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_QUOT ,KC_BSPC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_LCMD ,         KC_RCMD ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_QUES ,KC_RSFT ,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    LOWER   ,CTL_ESC ,KC_SPC  ,                  KC_ENT  ,ALT_TAB ,LOWER
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
    //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
       XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_LBRC ,XXXXXXX ,                           XXXXXXX ,KC_RBRC ,KC_DLR  ,XXXXXXX ,KC_POWER,KC_MPLY ,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_VOLU ,XXXXXXX ,KC_EXLM ,KC_HASH ,KC_LCBR ,XXXXXXX ,                           XXXXXXX ,KC_RCBR ,KC_PERC ,KC_CIRC ,XXXXXXX ,KC_MFFD ,
    //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
       KC_VOLD ,KC_AT   ,KC_AMPR ,KC_SLSH ,KC_LPRN ,KC_TILD ,                           KC_ASTR ,KC_RPRN ,KC_BSLS ,KC_PIPE ,KC_GRV  ,KC_MRWD ,
    //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
       XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_LT   ,XXXXXXX ,KC_LCMD ,         KC_RCMD ,XXXXXXX ,KC_GT   ,KC_SCLN ,KC_COLN ,XXXXXXX ,KC_RSFT ,
    //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      LOWER   ,CTL_ESC ,KC_SPC  ,                  KC_ENT  ,ALT_TAB ,LOWER
                                  // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_QUOT:
      if (record->event.pressed) {
        // Do something when pressed
      } else {
        // Do something else when release
      }
      return false;
    default:
      return true;
  }
}
