#include "main.h"
/**
 * main - prints file name
 * @argc: number of arguments passed
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	char *name = *argv;

	while (*name++)
		_putchar(*name);
	_putchar('\n');
	return (0);
}
