#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of tiangle
 */

void print_triangle(int size)
{
	int l, s;
	int pixel;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (pixel = size - (l + 1); pixel > 0; pixel--)
				_putchar(' ');
			for (s = 0; s <= l; s++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
