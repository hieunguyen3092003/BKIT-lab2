/*
 * clock.h
 *
 *  Created on: Apr 2, 2024
 *      Author: ngtrunghieu
 */

#ifndef INC_CLOCK_H_
#define INC_CLOCK_H_

#pragma once
#include <stdint.h>

#define INIT_SYSTEM		0
#define CLOCKING		1
#define CONFIG_MINUTE	2
#define CONFIG_HOUR		3

void initClock(int min_num, int hour_num);
void clockFSM(void);

#endif /* INC_CLOCK_H_ */
