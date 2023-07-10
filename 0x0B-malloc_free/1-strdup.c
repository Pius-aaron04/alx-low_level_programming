#include <stdlib.h>
/**
 * _strdup - returns pointer to a copy of str
 * @str: string to be copied
 * Return: pointer to copy
 */

char *_strdup(char *str)
{
	unsigned int l_str = 0; /* length of string*/
	char *copy;
	unsigned int i = 0;

	while (*str)
	{
		l_str++;
		str++;
	}
	str = (str - l_str);
	copy = (char *)malloc(sizeof(char) * l_str);

	while (1)
	{
		if (i == l_str)
		{
			copy[i] = '\0';
			break;
		}
		copy[i] = *(str + i);
		i++;
	}
	return (copy);
}
