#include "main.h"

/**
 * flip_bits - flip bits of a to get b
 * @n: number to be flipped
 * @m: number to be fliiped to
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n;
	unsigned int flips = 0;

	x ^= m;
	while (x != 0)
	{
		x &= (x - 1);
		flips++;
	}
	return (flips);
}
