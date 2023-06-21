#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Return: returns the last digit
 * @n: parameter: number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -1 * last_digit;
	else
		last_digit = 1 * last_digit;
	_putchar(last_digit);
	return (last_digit);
}
