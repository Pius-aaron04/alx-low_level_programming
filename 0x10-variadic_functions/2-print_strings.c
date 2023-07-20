#include "variadic_functions.h"

/**
 * print_strings - prints n number of strings passed
 * @separator: separates strings
 * @n: number of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *string;

	if (n != 0)
	{
		va_start(strings, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(strings, char *);
			if (i == n - 1 || separator == NULL)
			{
				if (string == NULL)
					printf("nil");
				else
					printf("%s", string);
			}
			else
			{
				if (string == NULL)
					printf("nil%s", separator);
				else
					printf("%s%s", string, separator);
			}
		}
	}
	printf("\n");
}
