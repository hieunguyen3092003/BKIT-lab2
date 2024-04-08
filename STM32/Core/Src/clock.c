/*
 * clock.cpp
 *
 *  Created on: Apr 2, 2024
 *      Author: ngtrunghieu
 */

#include "clock.h"
#include "led7Seg.h"
#include "button.h"
#include "gpio.h"

uint8_t status = INIT_SYSTEM;

uint8_t counter = 0;
int second = 0;
int minute = 0;
int hour = 0;

int isButtonUp(void);
int isButtonDown(void);
int isButtonPressed(void);

void initClock(int min_num, int hour_num)
{
	counter = 0;
	second = 0;
	minute = min_num;
	hour = hour_num;

	return;
}

void clockRun()
{
	counter = (counter + 1) % 20;

	if(counter == 0)
	{
	  second++;
	  if(second == 60)
	  {
		  second = 0;
		  minute++;
		  if(minute == 60)
		  {
			  minute = 0;
			  hour++;
			  if(hour == 24)
			  {
				  hour = 0;
			  }
			  led_7seg_set_digit(hour / 10, 0, 0);
			  led_7seg_set_digit(hour % 10, 1, 0);
		  }
		  led_7seg_set_digit(minute / 10, 2, 0);
		  led_7seg_set_digit(minute % 10, 3, 0);
	  }
	}
	return;
}

int toggle = 0;

void clockConfigMin()
{
	counter = (counter + 1) % 20;
	if(counter == 1)
	{
		toggle = 1 - toggle;
	}

	if(isButtonUp())
	{
		if(minute < 59)
		{
			++minute;
		}
		else
		{
			minute	= 0;
		}
	}
	else if(isButtonDown())
	{
		if(minute > 0)
		{
			--minute;
		}
		else
		{
			minute = 59;
		}
	}
	else;

	turnOffLed(0);
	turnOffLed(1);

	if(toggle == 0)
	{
		turnOffLed(2);
		turnOffLed(3);
	}
	else
	{
		led_7seg_set_digit(minute / 10, 2, 0);
		led_7seg_set_digit(minute % 10, 3, 0);
	}
}
void clockConfigHour()
{
	counter = (counter + 1) % 20;
	if(counter == 1)
	{
		toggle = 1 - toggle;
	}

	if(isButtonUp())
	{
		if(hour < 23)
		{
			++hour;
		}
		else
		{
			hour = 0;
		}
	}
	else if(isButtonDown())
	{
		if(hour > 0)
		{
			--hour;
		}
		else
		{
			hour = 23;
		}
	}
	else;
	led_7seg_set_digit(hour / 10, 0, 0);
	led_7seg_set_digit(hour % 10, 1, 0);

	turnOffLed(2);
	turnOffLed(3);

	if(toggle == 0)
	{
		turnOffLed(0);
		turnOffLed(1);
	}
	else
	{
		led_7seg_set_digit(hour / 10, 0, 0);
		led_7seg_set_digit(hour % 10, 1, 0);
	}
}

int isButtonPressed(void)
{
	if(button_count[0] == 1)
	{
		return 1;
	}
	return 0;
}
int isButtonUp(void)
{
	if(button_count[3] % 20 == 1)
	{
		return 1;
	}
	return 0;
}
int isButtonDown(void)
{
	if(button_count[7] % 20 == 1)
	{
		return 1;
	}
	return 0;
}

void clockFSM()
{
	switch(status)
	{
	case INIT_SYSTEM:
	{
		led_7seg_set_digit(hour / 10, 0, 0);
		led_7seg_set_digit(hour % 10, 1, 0);
		led_7seg_set_digit(minute / 10, 2, 0);
		led_7seg_set_digit(minute % 10, 3, 0);
		led_7seg_set_colon(1);
		status = CLOCKING;
		counter = 0;
		second = 0;
		break;
	}
	case CLOCKING:
	{
		clockRun();
		if(isButtonPressed())
		{
			status = CONFIG_MINUTE;
		}
		break;
	}
	case CONFIG_MINUTE:
	{
		clockConfigMin();
		if(isButtonPressed())
		{
			status = CONFIG_HOUR;
		}

		break;
	}
	case CONFIG_HOUR:
	{
		clockConfigHour();
		if(isButtonPressed())
		{
			status = INIT_SYSTEM;
		}

		break;
	}
	default:
	{
		status = INIT_SYSTEM;
		break;
	}
	}
	return;
}

