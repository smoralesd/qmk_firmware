#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _NAVR,
    _MOUS,
    _MEDR,
    __NSL,
    _NSSL,
    _FUNL
};

#define XXXXXXX KC_NO

#define GUI_A LGUI_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define CLT_D LCTL_T(KC_D)
#define SFT_F LSFT_T(KC_F)
#define ALT_X RALT_T(KC_X)

#define SFT_J LSFT_T(KC_J)
#define CLT_K LCTL_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define GUI_QUO LGUI_T(KC_QUOT)
#define ALT_DOT RALT_T(KC_DOT)

#define NAVR LT(_NAVR, KC_SPC)
#define MOUS LT(_MOUS, KC_TAB)
#define MEDR LT(_MEDR, KC_ESC)
#define NSL LT(__NSL, KC_BSPC)
#define NSSL LT(_NSSL, KC_ENT)
#define FUNL LT(_FUNL, KC_DEL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_5x6(
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                       XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                       KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,XXXXXXX,
        XXXXXXX,GUI_A  ,ALT_S  ,CLT_D  ,SFT_F  ,KC_G   ,                       KC_H   ,SFT_J  ,CLT_K  ,ALT_L  ,GUI_QUO,XXXXXXX,
        XXXXXXX,KC_Z   ,ALT_X  ,KC_C   ,KC_V   ,KC_B   ,                       KC_N   ,KC_M   ,KC_COMM,ALT_DOT,KC_SLSH,XXXXXXX,
                        XXXXXXX,XXXXXXX,                                                       XXXXXXX,XXXXXXX,
                                                MEDR   ,NAVR   ,           NSL,FUNL   ,
                                                XXXXXXX,MOUS   ,          NSSL,XXXXXXX,
                                                XXXXXXX,XXXXXXX,        XXXXXXX,XXXXXXX
    ),

    [_NAVR] = LAYOUT_5x6(
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                      XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                      KC_CAPS,KC_UNDO,KC_CUT ,KC_COPY,KC_PSTE,XXXXXXX,
        XXXXXXX,KC_LGUI,KC_LALT,KC_LCTL,KC_LSFT,XXXXXXX,                      KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,KC_RALT,XXXXXXX,XXXXXXX,XXXXXXX,                      KC_HOME,KC_PGDN,KC_PGUP,KC_END ,KC_INS ,XXXXXXX,
                        XXXXXXX,XXXXXXX,                                                      XXXXXXX,XXXXXXX,
                                                XXXXXXX,XXXXXXX,      KC_BSPC,KC_DEL ,
                                                XXXXXXX,XXXXXXX,       KC_ENT,XXXXXXX,
                                                XXXXXXX,XXXXXXX,      XXXXXXX,XXXXXXX
    ),

    [_MOUS] = LAYOUT_5x6(
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                      XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                      XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,KC_LGUI,KC_LALT,KC_LCTL,KC_LSFT,XXXXXXX,                      KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,KC_RALT,XXXXXXX,XXXXXXX,XXXXXXX,                      KC_WH_L,KC_WH_D,KC_WH_U,KC_WH_R,XXXXXXX,XXXXXXX,
                        XXXXXXX,XXXXXXX,                                                      XXXXXXX,XXXXXXX,
                                                XXXXXXX,XXXXXXX,      KC_BTN3,KC_BTN2,
                                                XXXXXXX,XXXXXXX,      KC_BTN1,XXXXXXX,
                                                XXXXXXX,XXXXXXX,      XXXXXXX,XXXXXXX
    ),

    [_MEDR] = LAYOUT_5x6(
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                     XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                     XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,KC_LGUI,KC_LALT,KC_LCTL,KC_LSFT,XXXXXXX,                     KC_MPRV,KC_VOLD,KC_VOLU,KC_MNXT,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,KC_RALT,XXXXXXX,XXXXXXX,XXXXXXX,                     XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
                        XXXXXXX,XXXXXXX,                                                     XXXXXXX,XXXXXXX,
                                                XXXXXXX,XXXXXXX,     KC_MPLY,KC_MUTE,
                                                XXXXXXX,XXXXXXX,     KC_MSTP,XXXXXXX,
                                                XXXXXXX,XXXXXXX,     XXXXXXX,XXXXXXX
    ),

    [__NSL] = LAYOUT_5x6(
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,KC_LBRC,KC_7   ,KC_8   ,KC_9   ,KC_RBRC,                    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,KC_SCLN,KC_4   ,KC_5   ,KC_6   ,KC_EQL ,                    XXXXXXX,KC_LSFT,KC_LCTL,KC_LALT,KC_LGUI,XXXXXXX,
        XXXXXXX,KC_GRV ,KC_1   ,KC_2   ,KC_3   ,KC_BSLS,                    XXXXXXX,XXXXXXX,XXXXXXX,KC_RALT,XXXXXXX,XXXXXXX,
                        XXXXXXX,XXXXXXX,                                                    XXXXXXX,XXXXXXX,
                                                KC_DOT ,KC_0,       XXXXXXX,XXXXXXX,
                                                XXXXXXX,KC_MINS,    XXXXXXX,XXXXXXX,
                                                XXXXXXX,XXXXXXX,    XXXXXXX,XXXXXXX
    ),

    [_NSSL] = LAYOUT_5x6(
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,KC_LCBR,KC_AMPR,KC_ASTR,KC_LPRN,KC_RCBR,                    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,KC_COLN,KC_DLR ,KC_PERC,KC_CIRC,KC_PLUS,                    XXXXXXX,KC_LSFT,KC_LCTL,KC_LALT,KC_LGUI,XXXXXXX,
        XXXXXXX,KC_TILD,KC_EXLM,KC_AT  ,KC_HASH,KC_PIPE,                    XXXXXXX,XXXXXXX,XXXXXXX,KC_RALT,XXXXXXX,XXXXXXX,
                        XXXXXXX,XXXXXXX,                                                    XXXXXXX,XXXXXXX,
                                               KC_LPRN,KC_RPRN,     XXXXXXX,XXXXXXX,
                                               XXXXXXX,KC_UNDS,     XXXXXXX,XXXXXXX,
                                               XXXXXXX,XXXXXXX,     XXXXXXX,XXXXXXX
    ),

    [_FUNL] = LAYOUT_5x6(
        XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,                    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,KC_F12 ,KC_F7  ,KC_F8  ,KC_F9  ,KC_PSCR,                    XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,KC_F11 ,KC_F4  ,KC_F5  ,KC_F6  ,KC_SLCK,                    XXXXXXX,KC_LSFT,KC_LCTL,KC_LALT,KC_LGUI,XXXXXXX,
        XXXXXXX,KC_F10 ,KC_F1  ,KC_F2  ,KC_F3  ,KC_PAUS,                    XXXXXXX,XXXXXXX,XXXXXXX,KC_RALT,XXXXXXX,XXXXXXX,
                        XXXXXXX,XXXXXXX,                                                    XXXXXXX,XXXXXXX,
                                                 KC_APP,KC_SPC,     XXXXXXX,XXXXXXX,
                                                XXXXXXX,KC_TAB,     XXXXXXX,XXXXXXX,
                                                XXXXXXX,XXXXXXX,    XXXXXXX,XXXXXXX
    )
};
