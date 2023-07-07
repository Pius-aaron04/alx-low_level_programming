#include <stdio.h>
/**
 * main - prints file name
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
