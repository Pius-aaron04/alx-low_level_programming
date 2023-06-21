#include "main.h"

/**
 * jack_bauer - prints every minute in 24 hours
 * Return: void
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			if (hour < 10)
			{	_putchar('0');
				_putchar('0' + hour);
				_putchar(':');
			}
			else
			{
				_putchar('0' + (hour / 10));
				_putchar('0' + (hour % 10));
				_putchar(':');
			}
			if (minute < 10)
			{
				_putchar('0');
				_putchar('0' + minute);
			}
			else
			{
				_putchar('0' + (minute / 10));
				_putchar('0' + (minute % 10));
			}
			_putchar('\n');
		}
	}
}
