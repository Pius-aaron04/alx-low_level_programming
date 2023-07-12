#include <stdio.h>
#include <stdlib.h>

/**
 * main - multplies two numbers from standard input
 * @argc: number of arguments
 * @argv: array of parameters
 * Return: 0 on success and 1 0n failure
 */

int main(int argc __attribute__((unused)), char *argv[3])
{
	int product = 1;
	int i;

	if ((argc == 1) || (argc > 3))
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' || *argv[i] <= '9')
		{
			product *= atoi(argv[i]);
		}
		else
		{
			printf("Error");
			return (1);
		}
	}
	printf("%d\n", product);
	return (0);
}
