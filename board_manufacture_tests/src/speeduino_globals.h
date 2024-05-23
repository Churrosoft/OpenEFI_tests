//
// Created by fdsoftware on 29/04/24.
//

#ifndef BOARD_MANUFACTURE_TESTS_SPEEDUINO_GLOBALS_H
#define BOARD_MANUFACTURE_TESTS_SPEEDUINO_GLOBALS_H

#define PORT_TYPE uint32_t
#define PINMASK_TYPE uint32_t
#define COMPARE_TYPE uint16_t

//Handy bitsetting macros
#define BIT_SET(a,b) ((a) |= (1U<<(b)))
#define BIT_CLEAR(a,b) ((a) &= ~(1U<<(b)))
#define BIT_CHECK(var,pos) !!((var) & (1U<<(pos)))
#define BIT_TOGGLE(var,pos) ((var)^= 1UL << (pos))
#define BIT_WRITE(var, pos, bitvalue) ((bitvalue) ? BIT_SET((var), (pos)) : bitClear((var), (pos)))

#include "uEFIv6_pinout.h"

#endif //BOARD_MANUFACTURE_TESTS_SPEEDUINO_GLOBALS_H
