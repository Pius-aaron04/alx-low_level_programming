#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 on successful execution
 */
int main(void)
{
	int x;
	char y;

	for (x = 0; x != 10; x++)
		putchar('0' + x);
	for (y = 'a'; y != 'g'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
