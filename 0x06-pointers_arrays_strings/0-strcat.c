#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: source to be appended
 * @dest : destination string.
 * Return: pointer to first element to dest.
 */

char *_strcat(char *dest, char *src)
{
	char *p_dest = dest; /* points to element of resulting string.*/

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p_dest);/* returns address of the resulting string */
}
