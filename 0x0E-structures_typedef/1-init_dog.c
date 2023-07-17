#include "dog.h"
/**
 * init_dog - initializes members of dog structure
 * @d: pointer to structure
 * @name: name of dog(string)
 * @age: age of dog(float)
 * @owner: string
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
