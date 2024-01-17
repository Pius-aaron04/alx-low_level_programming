#include <stdio.h>
#include <stdlib.h>

/**
 * binary - searches through an array of integers
 * @array: pointer to first element in the array
 * @start: search start point
 * @end: search end point
 * @value: to search for
 * Return: index of value if found else -1
 */

int binary(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;

	if (!array)
		return (-1);
	while (start < end)
	{
		mid = (end + start + 1) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i != end)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			end = mid;
		else if (value > array[mid])
			start = mid;
	}
	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i != end)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
	if (array[mid] == value)
		return (1);
	return (-1);
}

/**
 * exponential_search - searches an array of integers for @value
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value/integer to search for
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	for (i = 1; i < size; i *= 2)
	{
		if (array[i] == value)
			return (i);
		if (array[i] > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i / 2, i);
			return (binary(array, i / 2, i, value));
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, size - 1);
	return (binary(array, i / 2, --size, value));

}
