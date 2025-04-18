/* Copyright 2022 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE

// clang-format off

const snled27351_led_t PROGMEM g_snled27351_leds[SNLED27351_LED_COUNT] = {
/* Refer to SNLED27351 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    // ESC, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, PgDn, PgUp, Del, PrtSc
    {0, CB9_CA1,    CB7_CA1,    CB8_CA1},     // ESC
    {0, CB9_CA3,    CB7_CA3,    CB8_CA3},     // F1
    {0, CB9_CA4,    CB7_CA4,    CB8_CA4},     // F2
    {0, CB9_CA5,    CB7_CA5,    CB8_CA5},     // F3
    {0, CB9_CA6,    CB7_CA6,    CB8_CA6},     // F4
    {0, CB9_CA8,    CB7_CA8,    CB8_CA8},     // F5
    {0, CB9_CA9,    CB7_CA9,    CB8_CA9},     // F6
    {0, CB9_CA10,   CB7_CA10,   CB8_CA10},    // F7
    {0, CB9_CA11,   CB7_CA11,   CB8_CA11},    // F8
    {0, CB9_CA12,   CB7_CA12,   CB8_CA12},    // F9
    {0, CB9_CA13,   CB7_CA13,   CB8_CA13},    // F10
    {0, CB9_CA14,   CB7_CA14,   CB8_CA14},    // F11
    {0, CB9_CA15,   CB7_CA15,   CB8_CA15},    // F12
    {0, CB9_CA16,   CB7_CA16,   CB8_CA16},    // PgDn
    {0, CB12_CA12,  CB10_CA12,  CB11_CA12},   // PgUp
    {0, CB12_CA13,  CB10_CA13,  CB11_CA13},   // Del
    {0, CB12_CA14,  CB10_CA14,  CB11_CA14},   // PrtSc

    // Number row: ~, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, -, =, Backspace, NumLock, /, *, -
    {0, CB3_CA1,    CB1_CA1,    CB2_CA1},     // ~
    {0, CB3_CA2,    CB1_CA2,    CB2_CA2},     // 1
    {0, CB3_CA3,    CB1_CA3,    CB2_CA3},     // 2
    {0, CB3_CA4,    CB1_CA4,    CB2_CA4},     // 3
    {0, CB3_CA5,    CB1_CA5,    CB2_CA5},     // 4
    {0, CB3_CA6,    CB1_CA6,    CB2_CA6},     // 5
    {0, CB3_CA7,    CB1_CA7,    CB2_CA7},     // 6
    {0, CB3_CA8,    CB1_CA8,    CB2_CA8},     // 7
    {0, CB3_CA9,    CB1_CA9,    CB2_CA9},     // 8
    {0, CB3_CA10,   CB1_CA10,   CB2_CA10},    // 9
    {0, CB3_CA11,   CB1_CA11,   CB2_CA11},    // 0
    {0, CB3_CA12,   CB1_CA12,   CB2_CA12},    // -
    {0, CB3_CA13,   CB1_CA13,   CB2_CA13},    // =
    {0, CB3_CA14,   CB1_CA14,   CB2_CA14},    // Backspace
    {0, CB3_CA16,   CB1_CA16,   CB2_CA16},    // NumLock
    {0, CB12_CA9,   CB10_CA9,   CB11_CA9},    // /
    {0, CB12_CA10,  CB10_CA10,  CB11_CA10},   // *
    {0, CB12_CA11,  CB10_CA11,  CB11_CA11},   // -

    // Tab row: Tab, Q, W, E, R, T, Y, U, I, O, P, [, ], \, 7, 8, 9, +
    {0, CB6_CA1,    CB4_CA1,    CB5_CA1},     // Tab
    {0, CB6_CA2,    CB4_CA2,    CB5_CA2},     // Q
    {0, CB6_CA3,    CB4_CA3,    CB5_CA3},     // W
    {0, CB6_CA4,    CB4_CA4,    CB5_CA4},     // E
    {0, CB6_CA5,    CB4_CA5,    CB5_CA5},     // R
    {0, CB6_CA6,    CB4_CA6,    CB5_CA6},     // T
    {0, CB6_CA7,    CB4_CA7,    CB5_CA7},     // Y
    {0, CB6_CA8,    CB4_CA8,    CB5_CA8},     // U
    {0, CB6_CA9,    CB4_CA9,    CB5_CA9},     // I
    {0, CB6_CA10,   CB4_CA10,   CB5_CA10},    // O
    {0, CB6_CA11,   CB4_CA11,   CB5_CA11},    // P
    {0, CB6_CA12,   CB4_CA12,   CB5_CA12},    // [
    {0, CB6_CA13,   CB4_CA13,   CB5_CA13},    // ]
    {0, CB6_CA14,   CB4_CA14,   CB5_CA14},    // \
    {0, CB6_CA15,   CB4_CA15,   CB5_CA15},    // 7
    {0, CB6_CA16,   CB4_CA16,   CB5_CA16},    // 8
    {0, CB12_CA15,  CB10_CA15,  CB11_CA15},   // 9
    {1, CB3_CA16,   CB1_CA16,   CB2_CA16},    // +

    // Caps row: Caps, A, S, D, F, G, H, J, K, L, ;, ', Enter, 4, 5, 6
    {1, CB3_CA15,   CB1_CA15,   CB2_CA15},    // Caps
    {1, CB3_CA14,   CB1_CA14,   CB2_CA14},    // A
    {1, CB3_CA13,   CB1_CA13,   CB2_CA13},    // S
    {1, CB3_CA12,   CB1_CA12,   CB2_CA12},    // D
    {1, CB3_CA11,   CB1_CA11,   CB2_CA11},    // F
    {1, CB3_CA10,   CB1_CA10,   CB2_CA10},    // G
    {1, CB3_CA9,    CB1_CA9,    CB2_CA9},     // H
    {1, CB3_CA8,    CB1_CA8,    CB2_CA8},     // J
    {1, CB3_CA7,    CB1_CA7,    CB2_CA7},     // K
    {1, CB3_CA6,    CB1_CA6,    CB2_CA6},     // L
    {1, CB3_CA5,    CB1_CA5,    CB2_CA5},     // ;
    {1, CB3_CA3,    CB1_CA3,    CB2_CA3},     // '
    {1, CB3_CA1,    CB1_CA1,    CB2_CA1},     // Enter
    {1, CB12_CA3,   CB10_CA3,   CB11_CA3},    // 4
    {1, CB12_CA4,   CB10_CA4,   CB11_CA4},    // 5
    {1, CB12_CA16,  CB10_CA16,  CB11_CA16},   // 6

    // Shift row: LShift, Z, X, C, V, B, N, M, ,, ., /, RShift, Up, 1, 2, 3, Enter
    {1, CB9_CA16,   CB7_CA16,   CB8_CA16},    // LShift
    {1, CB9_CA14,   CB7_CA14,   CB8_CA14},    // Z
    {1, CB9_CA13,   CB7_CA13,   CB8_CA13},    // X
    {1, CB9_CA12,   CB7_CA12,   CB8_CA12},    // C
    {1, CB9_CA11,   CB7_CA11,   CB8_CA11},    // V
    {1, CB9_CA10,   CB7_CA10,   CB8_CA10},    // B
    {1, CB9_CA9,    CB7_CA9,    CB8_CA9},     // N
    {1, CB9_CA8,    CB7_CA8,    CB8_CA8},     // M
    {1, CB9_CA7,    CB7_CA7,    CB8_CA7},     // ,
    {1, CB9_CA6,    CB7_CA6,    CB8_CA6},     // .
    {1, CB9_CA5,    CB7_CA5,    CB8_CA5},     // /
    {1, CB9_CA3,    CB7_CA3,    CB8_CA3},     // RShift
    {1, CB9_CA2,    CB7_CA2,    CB8_CA2},     // Up
    {1, CB9_CA1,    CB7_CA1,    CB8_CA1},     // 1
    {1, CB12_CA5,   CB10_CA5,   CB11_CA5},    // 2
    {1, CB12_CA6,   CB10_CA6,   CB11_CA6},    // 3
    {1, CB6_CA16,   CB4_CA16,   CB5_CA16},    // NumPad Enter

    // Bottom row: LCtrl, Win/Opt, LAlt/Cmd, Space, RAlt/Cmd, Fn, RCtrl, Left, Down, Right, 0, .
    {1, CB6_CA15,   CB4_CA15,   CB5_CA15},    // LCtrl
    {1, CB6_CA14,   CB4_CA14,   CB5_CA14},    // Win/Opt
    {1, CB6_CA10,   CB4_CA10,   CB5_CA10},    // LAlt/Cmd
    {1, CB6_CA6,    CB4_CA6,    CB5_CA6},     // Space
    {1, CB6_CA5,    CB4_CA5,    CB5_CA5},     // RAlt/Cmd
    {1, CB6_CA4,    CB4_CA4,    CB5_CA4},     // Fn
    {1, CB6_CA3,    CB4_CA3,    CB5_CA3},     // RCtrl
    {1, CB6_CA2,    CB4_CA2,    CB5_CA2},     // Left
    {1, CB6_CA1,    CB4_CA1,    CB5_CA1},     // Down
    {1, CB12_CA1,   CB10_CA1,   CB11_CA1},    // Right
    {1, CB12_CA2,   CB10_CA2,   CB11_CA2},    // 0
    {1, CB12_CA7,   CB10_CA7,   CB11_CA7}     // .
};

#endif // RGB_MATRIX_ENABLE