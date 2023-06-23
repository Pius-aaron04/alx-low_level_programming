#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 */

void print_square(int size)
{
	int pixel;
	int i;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (pixel = 0; pixel < size; pixel++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
