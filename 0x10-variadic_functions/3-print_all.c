#include "variadic_functions.h"

/**
 * print_all - print arguements arcodeing to their types
 * @format: string to be formatted
 */

void print_all(const char * const format, ...)
{
	int i = 0, format_found = 0;
	va_list inputs;
	char *s;

	va_start(inputs, format);
	while (i < (int)strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(inputs, int));
				format_found = 1;
				break;
			case 's':
				s = va_arg(inputs, char *);
				if (s == NULL)
					s = "nil";
				printf("%s", s);
				format_found = 1;
				break;
			case 'i':
				printf("%i", va_arg(inputs, int));
				format_found = 1;
				break;
			case 'f':
				printf("%f", va_arg(inputs, double));
				format_found = 1;
				break;
			default:
				format_found = 0;
		}
		if (i != (int)strlen(format) - 1 && (format_found))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(inputs);
}
