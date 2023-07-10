#include <stdlib.h>

/**
 * create_array - Creates an array of n elements
 * @size: number of elements or size of array
 * @c: character to occupy array
 * Return: a char pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0 || size == INT_MAX)
		return (NULL);
	array = (char *)malloc(sizeof(char) * size);

	while (1)
	{
		if (i != size)
			array[i] = c;
		else
		{
			array[i] = '\0';
			break;
		}
		i++;
	}
	return (array);
}
