#include "main.h"

/**
 * get_bit - gets the bit at specified index
 * @n: decimal number
 * @index: position of bit
 * Return: int bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if ((n & (1 << index)) != 0)
		return (1);
	return (0);
}
