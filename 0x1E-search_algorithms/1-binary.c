#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints array of integers
 * @array: pointer to first element in the array
 * @start: start point
 * @end: end point
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	for (i = start; i <= end; i++)
	{
		if (i != end)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - searches through an array of integers
 * @array: pointer to first element in the array
 * @size: size of array
 * @value: to search for
 * Return: index of value if found else -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t lb = 0;
	size_t hb = size - 1;
	size_t mid;

	if (!array)
		return (-1);
	while (lb <= hb)
	{
		mid = (hb + lb + 1) / 2;
		printf("Searching in array: ");
		print_array(array, lb, hb);
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			hb = mid - 1;
		else if (value > array[mid])
			lb = mid + 1;
	}
	return (-1);
}
