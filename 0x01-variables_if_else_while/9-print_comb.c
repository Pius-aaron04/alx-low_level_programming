#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0 on succesful execution
 */
int main(void)
{
	int x;

	for (x = 0; x != 10; x++)
	{
		if (x == 9)
			putchar('0' + x);
		else
		{
			putchar('0' + x);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
