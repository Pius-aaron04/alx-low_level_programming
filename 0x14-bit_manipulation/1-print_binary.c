#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: decimal number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int moves = 0;
	unsigned long int x = n;

	if (n == 0)
		_putchar(48);
	while (x != 0)
	{
		x >>= 1;
		moves++;
	}
	moves--;

	for (; moves >= 0; moves--)
	{
		_putchar('0' + ((n >> moves) & 1));
	}
}
