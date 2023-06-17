#include <stdio.h>
/**
 * main - prints alphabets
 * Return: return 0 for successful program
 */
int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n')
	return (0);
}
