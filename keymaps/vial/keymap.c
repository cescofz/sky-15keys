#include QMK_KEYBOARD_H
#define GRAVE_MODS  (MOD_BIT(KC_LSFT)|MOD_BIT(KC_RSFT)|MOD_BIT(KC_LGUI)|MOD_BIT(KC_RGUI)|MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,      
        KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,
        KC_N,   KC_M,   KC_COMM,   KC_DOT,   KC_SLSH
    )
};
/*Ĭ�ϲ���:�������ٲ���,����Vial����޸�
����������������������������������������
��Y ����U ����I ����O ����P ��
����������������������������������������
����������������������������������������
��H ����J ����K ����L ����\ |
����������������������������������������
����������������������������������������
��N ����M ����, ����. ����/ ��
����������������������������������������
*/