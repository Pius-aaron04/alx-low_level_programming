#include "variadic_functions.h"

/**
 * sum_them_all - sums up all numbers passed as arguments
 * @n: amount of numbers to be summed
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(numbers, n);
	for (i = 0; i < n; i++)
		sum += va_arg(numbers, int);
	va_end(numbers);
	return (sum);
}
