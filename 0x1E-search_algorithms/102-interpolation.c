#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - seacrhes an array of integers
 * @array: pointer to the first element in the array
 * @size: length/size of the array
 * @value: value to search for
 * Return: index of the value if found else -1
 */


int interpolation_search(int *array, size_t size, int value)
{
	size_t lb, hb, pos;

	hb = size - 1;
	lb = 0;

	if (!array)
		return (-1);
	while (lb <= hb)
	{
		pos = lb + (((double)(hb - lb) / (array[hb] - array[lb])) *
				(value - array[lb]));
		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (value < array[pos])
			hb = pos;
		else
			lb = pos;

	}
	return (-1);
}
