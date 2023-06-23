#include "main.h"

/**
 * print_line - prints a line
 * @n: integer determines the length of line
 * Return: 0
 */

void print_line(int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0; m < n; m++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
