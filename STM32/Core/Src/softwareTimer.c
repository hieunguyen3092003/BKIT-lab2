/*
 * softwareTimer.c
 *
 *  Created on: Mar 9, 2024
 *      Author: hieun
 */

#include "softwareTimer.h"

uint32_t timer2_counter = 0;
uint8_t timer2_flag = 0;

void setTimer2(uint32_t duration)
{
	timer2_counter = duration;
	timer2_flag = 0;
}

uint8_t getFlagTimer2()
{
	return timer2_flag;
}

void timerRun()
{
	if(timer2_counter > 0)
	{
		--timer2_counter;
	}
	if (timer2_counter <= 0)
	{
		timer2_flag = 1;
	}
}
