#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lower case 10 times
 */

void print_alphabet_x10(void)
{
	int a = 1;
	char s;

	while (a <= 10)
	{
		for (s = 'a'; s <= 'z'; s++)
			_putchar(s);
		_putchar('\n');
		a++;
	}
}
