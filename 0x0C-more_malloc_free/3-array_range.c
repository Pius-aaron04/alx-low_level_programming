#include <stdlib.h>
/**
 * array_range - creates an array of range of integers
 * @min: starting integer
 * @max: ending integer
 * Return: array pointer
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));

	for (i = min, j = 0; i <= max; i++)
	{
		array[j] = i;
		j++;
	}
	return (array);
}
