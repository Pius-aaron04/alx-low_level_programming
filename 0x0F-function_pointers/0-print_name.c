#include "function_pointers.h"

/**
 * print_name - calls a function that prints a name
 * @name: name to be printed
 * @f: pointer to printing function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
