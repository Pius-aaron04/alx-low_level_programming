#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 on success
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
