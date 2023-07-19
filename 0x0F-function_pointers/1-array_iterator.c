#include "function_pointers.h"

/**
 * array_iterator - iterates through arrays
 * @array: array
 * @size: size of array
 * @action: function pointer to perform specific task
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < (int)size; i++)
			action(array[i]);
}
