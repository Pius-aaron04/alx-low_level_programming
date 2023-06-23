#include "main.h"

/**
 * print_diagonal - print diagonal of length n
 * @n: length of diagonal
 */

void print_diagonal(int n)
{
	int l;
	int m = 0;

	if (n > 0)
	{
		while (n > 0)
		{
			for (l = 0; l < m; l++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			n--;
			m++;
		}
	}
	else
		_putchar('\n');
}
