#include <stdio.h>
/**
 * main - prints combination of three integers
 * Return: returns 0 on successful execution
 */
int main(void)
{
	int digit1, digit2, digit3, digit2_min, digit3_min;

	digit2_min = -1;
	digit3_min = -1;
	digit1 = 0;

	while (digit1 < 10)
	{
		digit2_min++;
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			digit3_min++; /* increases lower limit for 3rd digit b4 iteration */
			for (digit3 = 0; digit3 <= 9; digit3++)
			{
				if (digit1 != digit2 && digit2 != digit3 && digit1 != digit3)
				{
					if (digit2 >= digit2_min && digit3 >= digit3_min)
					{
						putchar('0' + digit1);
						putchar('0' + digit2);
						putchar('0' + digit3);
					
						if (digit1 != 7 || digit2 != 8 || digit3 != 9)
						{
					
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
