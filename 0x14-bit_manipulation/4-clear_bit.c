#include "main.h"

/**
 * clear_bit - clears bit at specified index
 * @n: pointer to decimal
 * @index: bit position
 * Return: 1 on success else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if ((*n | (1 << index)) != 0)
	{
		*n = *n & (~(1 << index));
		return (1);
	}
	else
		return (-1);
}
