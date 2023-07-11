#include <string.h>
#include <limits.h>
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

	if (str == NULL)
		return (NULL);
	while (*str)
	{
		l_str++;
		str++;
	}
	str = (str - l_str);
	if (l_str >= CHAR_MAX)
		return (NULL);
	copy = (char *)malloc((sizeof(char) * l_str) + 1);
	while (1)
	{
		if (i == l_str + 1)
		{
			copy[i] = '\0';
			break;
		}
		copy[i] = *(str + i);
		i++;
	}
	return (copy);
}
