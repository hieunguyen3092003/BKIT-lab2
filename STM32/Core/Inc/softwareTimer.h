/*
 * softwareTimer.h
 *
 *  Created on: Mar 9, 2024
 *      Author: hieun
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

#pragma once

#include <stdint.h>
#include "tim.h"
#include "led7Seg.h"

void setTimer2(uint32_t duration);

uint8_t getFlagTimer2(void);

void initializeTimer2(void);

#endif /* INC_SOFTWARETIMER_H_ */
