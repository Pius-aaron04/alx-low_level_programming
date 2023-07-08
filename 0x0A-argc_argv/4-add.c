#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of integers
 * Return: 0 on succes and 1 on failure
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc == 1)
		printf("0\n");
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return(1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
