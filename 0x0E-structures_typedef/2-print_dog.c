#include <stdio.h>
#include "dog.h"
#include <stddef.h>
/**
 * print_dog - displays info of dog structure
 * @d: dog structure
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else
	{
		if (d->name == NULL)
			d->name = "nil";
		printf("Name: %s\n", d->name);
		if (d->owner == NULL)
			d->owner = "nil";
		printf("Age: %.6f\nOwner: %s\n", d->age, d->owner);
	}
}

