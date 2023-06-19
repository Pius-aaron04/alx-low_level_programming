#include  <stdio.h>
/**
 * main - prints two digits combos
 * Return: returns 0 on successful execution
 */

int main(void)
{
	int digit1;
	int digit2;

	/* sets the minimum range value for digit avoiding combot repetation */
	int digit2_min = 0;

	for (digit1 = 0; digit1 <= 9; digit1++) /* picks a digit starting from 0-9 */
	{
		/* increments the next possible value of digit2 by 1. */
		digit2_min++;
		digit2 = 0;
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			/* checks if numbers are not repeated and distinct */
			if (digit1 != digit2 && digit2 >= digit2_min)
			{
				putchar('0' + digit1);
				putchar('0' + digit2);
			}
			else
				continue;
			if (digit1 != 8 || digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
