#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: main string
 * @s2: second string
 * @n: bytes of s2
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int l1, l2;
	unsigned int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = strlen(s1);
	if (n >= (unsigned int)strlen(s2))
		l2 = strlen(s2);
	l2 = n;

	new_string = malloc(sizeof(char) * (l1 + l2 + 1));
	if (new_string == NULL)
		return (NULL);
	while (i < l1)
	{
		if (s1[i])
			new_string[i] = s1[i];
		i++;
	}
	for (i = 0; i < l2; i++)
		new_string[i + l1] = s2[i];
	new_string[l1 + l2] = '\0';
	return (new_string);
}
