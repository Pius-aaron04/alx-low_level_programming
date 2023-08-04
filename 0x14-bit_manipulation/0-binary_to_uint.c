#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * two_exp - calcuates the exponent of 2
 * @n: power
 * Return: exp of two
 */

unsigned int two_exp(int n)
{
	unsigned int exp = 1;

	if (n == 0)
		return (exp);
	while (n > 0)
	{
		exp *= 2;
		n--;
	}
	return (exp);
}

/**
 * validate - checks for unwanted char
 * @s: string
 * Return: 1 if s is pure binary 0 otherwise
 */

int validate(const char *s)
{
	int l = 0;

	while (l < (int)strlen(s) - 1)
	{
		if (s[l] == 48 || s[l] == 49)
			++l;
		else
			return (0);
	}
	return (1);
}

/**
 * binary_to_uint - converts a binary to decimal
 * @b: binary entered as string
 * Return: decimal value
 */

unsigned int binary_to_uint(const char *b)
{
	char *str;
	unsigned int decimal = 0;

	int j = 0, i;

	/* validates binary value entered */
	if (b == NULL || validate(b) == 0)
		return (0);
	/* allocates memory for buffer */
	if (strlen(b) == 1 && b[0] == 48)
		return (0);
	str = malloc(strlen(strchr(b, '1')) + 1);
	if (str == NULL)
	{
		return (0);
	}
	str = strdup(strchr(b, '1'));

	for (i = (int) strlen(str) - 1; i >= 0; --i)
	{
		if (str[j] == '0')
			decimal += 0;
		else if (str[j] == 49)
			decimal += two_exp(i);
		j++;
	}
	free(str);
	return (decimal);
}
