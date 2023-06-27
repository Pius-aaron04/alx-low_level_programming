#include "main.h"
/**
 * swap_int - swaps the values two integers
 * @a: first integer's pointer
 * @b: second integers's pointer
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
