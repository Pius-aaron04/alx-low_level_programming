#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - deallocates memory allocate to dog
 * @d: dog structure
 */

void free_dog(dog_t *d)
{
		free(d);
}
