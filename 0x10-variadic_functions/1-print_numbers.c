#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with separators
 * @separator: a string that separates numbers
 * @n: number of integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i; /* index */

	if (n != 0 && separator != NULL)
	{
		va_start(numbers, n);
		for (i = 0; i < n; i++)
		{
			printf("%d%s", va_arg(numbers, int), separator);
		}
		printf("\n");
		va_end(numbers);
	}
	else
		printf("\n");
}
