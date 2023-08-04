#include "main.h"

/**
 * set_bit - sets the bit at specified index
 * @n: decimal number
 * @index: bit position
 * Return: 1 0n success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if ((*n & (1 << index)) == 0)
	{
		*n = *n | (1 << index);
		return (1);
	}
	else
		return (-1);
}
