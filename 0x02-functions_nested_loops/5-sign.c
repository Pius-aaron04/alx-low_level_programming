#include "main.h"

/**
 * print_sign - displays sign of n if positive or negative
 * @n: integer
 * Return: returns 1 if n is positive
 * 0 if n is zero and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
