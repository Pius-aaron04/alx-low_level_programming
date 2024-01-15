#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - searches an array of integers
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: first index where @value was found if found else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
