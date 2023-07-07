#include <stdio.h>
/**
 * main - prints all its arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	while (argc-- > 0)
	{
		printf("%s\n", (*argv++));
	}
	return (0);
}
