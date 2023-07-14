#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates memory address
 * @ptr: pointer to be rallocated
 * @old_size: size to be changed
 * @new_size: size of memory to allocate
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_memory;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_memory = malloc(new_size);
		return (new_memory);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_memory = malloc(new_size);
	if (new_memory == NULL)
		return (NULL);
	memcpy(new_memory, ptr, old_size);
	free(ptr);
	return (new_memory);
}
