#include "function_pointers.h"

/**
 * int_index - finds an integer
 * @array: array
 * @size: number of parameters
 * @cmp: pointer to function
 * Return: index of integer passed
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] == 1))
				return (i);
		}
		return (-1);
	}
	return (0);
}
