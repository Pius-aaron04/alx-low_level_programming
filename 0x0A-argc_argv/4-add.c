#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of integers
 * Return: 0 on succes and 1 on failure
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (!(argc > 1))
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < (int) strlen((const char *)argv[i]); j++)
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
