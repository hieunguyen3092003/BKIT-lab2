/*
 * button.h
 *
 *  Created on: Apr 2, 2024
 *      Author: ngtrunghieu
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#pragma once
#include <stdint.h>

/* Variables */
extern uint16_t button_count[16];

/* Functions */
void initializeButton(void);
void button_scan(void);

#endif /* INC_BUTTON_H_ */
