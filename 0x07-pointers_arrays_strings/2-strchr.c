#include <stddef.h>
/**
 * _strchr - locates first occurence of c in s
 * @s: String to be search
 * @c: character to be searched for
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
	char *temp = s;

	while (*temp != 0)
	{
		if (*temp == c)
			return (temp);
		temp++;
	}
	return (NULL);
}
