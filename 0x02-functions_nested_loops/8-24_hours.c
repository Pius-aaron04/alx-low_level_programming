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
				_putchar('0' + first_digit(hour));
				_putchar('0' + (hour % 10));
				_putchar(':');
			}
			if (minute < 60)
			{
				_putchar('0');
				_putchar('0' + minute);
			}
			else
			{
				_putchar('0' + first_digit(minute));
				_putchar('0' + (minute % 10));
			}
		}
		_putchar('\n');
	}
}

/**
 * first_digit - extracts the first digit of a number
 * @number: int type parameter
 * Return: int firstDigit
 */
int first_digit(int number)
{
	int n = number;

	while (n >= 10)
		n /= 10;
	firstDigit = number;
	return (firstDigit);
}
