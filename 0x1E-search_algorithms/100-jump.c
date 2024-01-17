#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - search through an array of integers using jump search
 * algorithm
 * @array: pointer to the first element in the array
 * @size: size/length of the array
 * @value: value to search for
 * Return: index of the value in the array if found else -1
 */

int jump_search(int *array, size_t size, int value)
{
	double m;
	size_t k, i, l;

	if (!array)
		return (-1);

	m = sqrt((double)size - 1);
	l = 0;
	for (k = 0; k <= size + m; k += m)
	{
		if (array[k] >= value || k > size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", l, k);
			for (i = l; i < size; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i,
					array[i]);
				if (array[i] == value)
					return (i);
			}

			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		l = k;
	}
	k -= k - size - 1;
	if (array[k] != value)
		return (-1);
	return (1);
}
