#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - deallocates memory allocate to dog
 * @d: dog structure
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		free(d);
	else
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
