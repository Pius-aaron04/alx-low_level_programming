#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string parameter
 */

void rev_string(char *s)
{
	char *end = s;
	char *start = s;

	while (*s != '\0')
	{
		end++;
		s++;
	}
	end--;
	while (start < end)
	{
		char temp = *start;

		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

