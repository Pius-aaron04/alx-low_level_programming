#include "main.h"
/**
 * puts2 - prints some characters starting with the first
 * charater of a string
 * @str: string parameter
 */

void puts2(char *str)
{
	int l = 0;
	char *s = str;

	while (*str != '\0')
	{
		l++;
		str++;
	}
	str = s;
	while (l >= 0)
	{
		if ((l % 2) == 0)
		{
			_putchar(*str);
		}
		str++;
		l--;
	}
	_putchar('\n');
}
