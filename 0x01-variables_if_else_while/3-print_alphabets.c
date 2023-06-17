#include <stdio.h>
/**
 * main - prints alphabets
 * Return: returns 0 for successful run
 */
int main(void)
{
	char alpha = 'a';
	char betta = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (betta <= 'Z')
	{
		putchar(betta);
		betta++;
	}
	putchar('\n');
	return (0);
}
