#include <stdlib.h>
/**
 * _calloc - allocates memory for n bytes for members of
 * array
 * @nmemb: number of array
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	return (memory);
}
