#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 for a successful program
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}
