#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int length = 0;
	int n;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	str = (str - length + 1);
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length + 1) / 2;
	length = 0;
	while (*str != '\0')
	{
		length++;
		if (length >= n)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}

