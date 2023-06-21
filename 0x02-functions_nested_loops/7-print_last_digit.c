#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Return: returns the last digit
 * @n: parameter: number
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = _abs((n % 10));
	_putchar(last_digit);
	return (last_digit);
}
