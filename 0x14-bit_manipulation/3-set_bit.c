#include <limits.h>
#include "main.h"

/**
 * set_bit - sets the bit at specified index
 * @n: decimal number
 * @index: bit position
 * Return: 1 0n success else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if ((*n & (1 << index)) == 0)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (1);
}
