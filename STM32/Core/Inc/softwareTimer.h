/*
 * softwareTimer.h
 *
 *  Created on: Mar 9, 2024
 *      Author: hieun
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

#include <stdint.h>

void setTimer2(uint32_t duration);

uint8_t getFlagTimer2(void);

void timerRun(void);

#endif /* INC_SOFTWARETIMER_H_ */
