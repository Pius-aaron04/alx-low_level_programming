#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int l = _strlen(s);

	while (l > 0)
	{
		_putchar(*(s + l));
		l--;
	}
}
