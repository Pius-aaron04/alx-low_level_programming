#include <stdio.h>
#include "dog.h"
#include <stddef.h>
/**
 * print_dog - displays info of dog structure
 * @d: dog structure
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "nil";
		printf("Name: %s\n", d->name);
		if (d->owner == NULL)
			d->owner = "nil";
		if ((int)d->age == 0)
			printf("Age: nil\n");
		else
			printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
		exit(1)
}

