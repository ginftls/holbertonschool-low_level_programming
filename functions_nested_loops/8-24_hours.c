#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (minute < 10)
				_putchar('0');
			_putchar('0' + minute);
			if (minute < 59)
				_putchar(':');
			if (minute == 59 && hour < 23)
				_putchar('\n');
		}
	}
}
