#include "main.h"
/**
 * _isupper - checks for uppercase characer
 * @c: int type character
 * Return: 1 if c is uppercase else 0
 */

int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
		result = 1;
	else
		result = 0;
	return (result);
}
