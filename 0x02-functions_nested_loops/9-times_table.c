#include "main.h"

/**
 * times_table - prints times table to 9times
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k <= 9 && j != 9)
			{
				_putchar('0' + k);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (k > 9 && j != 9)
			{
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 9 && k <= 9)
			{
				_putchar('0' + k);
				_putchar('\n');
			}
			else if (j == 9 && k > 9)
			{
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
				_putchar('\n');
			}

		}
	}
}
