#include QMK_KEYBOARD_H

enum layers {
    WRKMN,
    _NAVR,
    _MOUS,
    _MEDR,
    __NSL,
    _NSSL,
    _FUNL
};

// home row key definitions for WORKMAN layout
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_H LCTL_T(KC_H)
#define HOME_T LSFT_T(KC_T)
#define HOME_X RALT_T(KC_X)

#define HOME_N LSFT_T(KC_N)
#define HOME_E LCTL_T(KC_E)
#define HOME_O LALT_T(KC_O)
#define HOME_I LGUI_T(KC_I)
#define HOME_DT RALT_T(KC_DOT)

// layer management
#define NAVR LT(_NAVR, KC_SPC)
#define MOUS LT(_MOUS, KC_TAB)
#define MEDR LT(_MEDR, KC_ESC)
#define NSL LT(__NSL, KC_BSPC)
#define NSSL LT(_NSSL, KC_ENT)
#define FUNL LT(_FUNL, KC_DEL)

// shortcuts
#define CUT LCTL(KC_X)
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)

enum custom_macros {
    LAMBDA = SAFE_RANGE,
    ARROW,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode)
    {
    case LAMBDA:
        if (!record->event.pressed) {
            SEND_STRING("() => {}");
        }
        break;

    case ARROW:
        if (!record->event.pressed) {
            SEND_STRING("=>");
        }
        break;

    default:
        break;
    }

    return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [WRKMN] = LAYOUT_5x6(
        LAMBDA ,_______,_______,_______,_______,_______,                       _______,_______,_______,_______,_______,_______,
        ARROW  ,KC_Q   ,KC_D   ,KC_R   ,KC_W   ,KC_B   ,                       KC_J   ,KC_F   ,KC_U   ,KC_P   ,KC_QUOT,_______,
        _______,HOME_A ,HOME_S ,HOME_H ,HOME_T ,KC_G   ,                       KC_Y   ,HOME_N ,HOME_E ,HOME_O ,HOME_I ,_______,
        _______,KC_Z   ,HOME_X ,KC_M   ,KC_C   ,KC_V   ,                       KC_K   ,KC_L   ,KC_COMM,HOME_DT,KC_SLSH,_______,
                        _______,_______,                                                       _______,_______,
                                                MEDR   ,NAVR   ,           NSL,FUNL   ,
                                                _______,MOUS   ,          NSSL,_______,
                                                _______,_______,       _______,_______
    ),

    [_NAVR] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                       _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                       KC_CAPS,KC_UNDO,CUT    ,COPY   ,PASTE  ,_______,
        _______,KC_LGUI,KC_LALT,KC_LCTL,KC_LSFT,_______,                       KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,_______,
        _______,_______,KC_RALT,_______,_______,_______,                       KC_HOME,KC_PGDN,KC_PGUP,KC_END ,KC_INS ,_______,
                        _______,_______,                                                       _______,_______,
                                                _______,_______,       KC_BSPC,KC_DEL ,
                                                _______,_______,        KC_ENT,_______,
                                                _______,_______,       _______,_______
    ),

    [_MOUS] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                       _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                       _______,_______,_______,_______,_______,_______,
        _______,KC_LGUI,KC_LALT,KC_LCTL,KC_LSFT,_______,                       KC_MS_L,KC_MS_D,KC_MS_U,KC_MS_R,_______,_______,
        _______,_______,KC_RALT,_______,_______,_______,                       KC_WH_L,KC_WH_D,KC_WH_U,KC_WH_R,_______,_______,
                        _______,_______,                                                       _______,_______,
                                                _______,_______,       KC_BTN3,KC_BTN2,
                                                _______,_______,       KC_BTN1,_______,
                                                _______,_______,       _______,_______
    ),

    [_MEDR] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                       _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                       _______,_______,_______,_______,_______,_______,
        _______,KC_LGUI,KC_LALT,KC_LCTL,KC_LSFT,_______,                       KC_MPRV,KC_VOLD,KC_VOLU,KC_MNXT,_______,_______,
        _______,_______,KC_RALT,_______,_______,_______,                       _______,_______,_______,_______,_______,_______,
                        _______,_______,                                                       _______,_______,
                                                _______,_______,       KC_MPLY,KC_MUTE,
                                                _______,_______,       KC_MSTP,_______,
                                                _______,_______,       _______,_______
    ),

    [__NSL] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                      _______,_______,_______,_______,_______,_______,
        _______,KC_LBRC,KC_7   ,KC_8   ,KC_9   ,KC_RBRC,                      _______,_______,_______,_______,_______,_______,
        _______,KC_SCLN,KC_4   ,KC_5   ,KC_6   ,KC_EQL ,                      _______,KC_LSFT,KC_LCTL,KC_LALT,KC_LGUI,_______,
        _______,KC_GRV ,KC_1   ,KC_2   ,KC_3   ,KC_BSLS,                      _______,_______,_______,KC_RALT,_______,_______,
                        _______,_______,                                                      _______,_______,
                                                KC_DOT ,KC_0,         _______,_______,
                                                _______,KC_MINS,      _______,_______,
                                                _______,_______,      _______,_______
    ),

    [_NSSL] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                     _______,_______,_______,_______,_______,_______,
        _______,KC_LCBR,KC_AMPR,KC_ASTR,KC_LPRN,KC_RCBR,                     _______,_______,_______,_______,_______,_______,
        _______,KC_COLN,KC_DLR ,KC_PERC,KC_CIRC,KC_PLUS,                     _______,KC_LSFT,KC_LCTL,KC_LALT,KC_LGUI,_______,
        _______,KC_TILD,KC_EXLM,KC_AT  ,KC_HASH,KC_PIPE,                     _______,_______,_______,KC_RALT,_______,_______,
                        _______,_______,                                                     _______,_______,
                                               KC_LPRN,KC_RPRN,      _______,_______,
                                               _______,KC_UNDS,      _______,_______,
                                               _______,_______,      _______,_______
    ),

    [_FUNL] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                    _______,_______,_______,_______,_______,_______,
        _______,KC_F12 ,KC_F7  ,KC_F8  ,KC_F9  ,KC_PSCR,                    _______,_______,_______,_______,_______,_______,
        _______,KC_F11 ,KC_F4  ,KC_F5  ,KC_F6  ,KC_SLCK,                    _______,KC_LSFT,KC_LCTL,KC_LALT,KC_LGUI,_______,
        _______,KC_F10 ,KC_F1  ,KC_F2  ,KC_F3  ,KC_PAUS,                    _______,_______,_______,KC_RALT,_______,_______,
                        _______,_______,                                                    _______,_______,
                                                 KC_APP,KC_SPC,     _______,_______,
                                                _______,KC_TAB,     _______,_______,
                                                _______,_______,    _______,_______
    )
};
