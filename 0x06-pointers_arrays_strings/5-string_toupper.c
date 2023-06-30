#include "main.h"

/**
 * string_toupper - returns a pointer to a string
 * @s: string argument
 * Return: pointer to s
 */

char *string_toupper(char *s)
{
	char *c = s;

	while (*s != '\0')
	{
		if (*s >= 96 && *s <= 122)
		{
			*s = *s - 32;
		}
		s++;
	}
	return (c);
}
