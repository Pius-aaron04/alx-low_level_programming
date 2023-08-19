#include "main.h"
#include <stdlib.h>
/**
 * _strstr - locates the first matching substring of accept in str
 * @haystack: string to be searched
 * @needle: refrence string
 * Return: pointer to the first character of the matched string
 */

char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || *needle == '\0')
		return (haystack);
	while (*haystack != 0)
	{
		if ((*haystack == *needle) && *(haystack + 1) == *(needle + 1))
			return (haystack);
		haystack++;
	}
	return (((void *) 0));
}
