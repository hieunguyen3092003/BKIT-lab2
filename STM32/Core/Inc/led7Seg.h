/*
 * led7Seg.h
 *
 *  Created on: Mar 27, 2024
 *      Author: ngtrunghieu
 */

#ifndef INC_LED7SEG_H_
#define INC_LED7SEG_H_

#pragma once

#include "spi.h"

/* Includes */
#include "stdint.h"

/* Variables */

/* Functions */
extern void led_7seg_init();
extern void led_7seg_set_digit(int num, int position, uint8_t show_dot);
extern void led_7seg_set_colon(uint8_t status);
extern void led_7seg_display();

extern void led_7seg_debug_turn_on(uint8_t index);
extern void led_7seg_debug_turn_off(uint8_t index);

#endif /* INC_LED7SEG_H_ */
