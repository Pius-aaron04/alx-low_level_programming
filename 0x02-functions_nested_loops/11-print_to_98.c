#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: int parameter n
 * Return: returns 0 on success
 */

int print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
			printf("%d, ", n);
	}
	else
		for (; n >= 98; n--)
			printf("%d, ", n);
	_putchar('\n');
	return (0);
}
