#include <stdio.h>

void print_first(void) __attribute__((constructor));
/**
 * print_first - prints before main function executes
 */

void print_first(void)
{
	printf(
		"You're beat! and yet, you must allow,\nI bore my own house on my back!\n");
}
