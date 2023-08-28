#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to print
 */

void print_number(int n)
{
	int d = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (n / d >= 10)
	{
		d *= 10;
	}
	while (d > 0)
	{
		_putchar('0' + (n / d));
		n %= d;
		d /= 10;
	}
}
