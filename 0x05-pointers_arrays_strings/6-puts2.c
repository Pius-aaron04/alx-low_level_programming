#include "main.h"
/**
 * puts2 - prints some characters starting with the first
 * charater of a string
 * @str: string parameter
 */

void puts2(char *str)
{
	int l = 0; /* length of string */

	while (*str != '\0')
	{
		if (l % 2 == 0) /* checks l for selective printing */
			_putchar(*str);
		str++; /* shifts point the next memory space */
		l++;
	}
	_putchar('\n');
}
