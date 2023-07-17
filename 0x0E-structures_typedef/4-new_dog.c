#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: owner
 * Return: a new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cpy = malloc(strlen(name) + 1);
	char *owner_cpy = malloc(strlen(owner) + 1);

	new_dog = malloc(sizeof(dog_t));
	if (name_cpy == NULL || owner_cpy == NULL || new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
