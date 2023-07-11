#include <stdlib.h>
#include <limits.h>

/**
 * get_length - counts number of characters in a string
 * @str: string
 * Return: integer
 */
unsigned int get_length(char *str)
{
	char *c = str;
	unsigned int l = 0;

	while (*c)

	{
		l++;
		c++;
	}
	return (l);
}

/**
 * str_concat - concatenate strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to anew string
 */

char *str_concat(char *s1, char *s2)
{	unsigned int l1 = 0;
	unsigned int l2 = 0;
	unsigned int i = 0;
	char *new_string;
	unsigned int new_string_length;

	/* checks and reassign strings is either of them is null*/ 
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if ((l1 + l2) > INT_MAX)
		return (0);

	l1 = get_length(s1);
	l2 = get_length(s2);
	new_string_length = l1 + l2;
	new_string = (char *)malloc(sizeof(char) * (new_string_length + 1));

	while (i < new_string_length)
	{
		if (!(*s1))	
			break;
		new_string[i] = s1[i];
		i++;
	}
	for (i = 0; i <= l2; i++)
	{
		new_string[l1 + i] = *s2;
		s2++;
	}
	return (new_string);
}
