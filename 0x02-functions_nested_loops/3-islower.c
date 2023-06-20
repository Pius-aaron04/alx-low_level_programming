#include "main.h"
/**
 * _islower - checks if a character is a lowercase character
 * @c: int type character
 * Return: returns 1 if character is lowercase
 * else 0 is returned
 */

int _islower(int c)
{
	if (c < 97 || c > 122)
		return (0);
	else
		return (1);
}
