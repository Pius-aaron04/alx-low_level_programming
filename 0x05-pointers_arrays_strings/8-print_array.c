#include "main.h"
#include <stdio.h>
/**
 * print_array - displays n numbers of elements of an array
 * @n: number of elements to be displayed
 * @a: array
 */

void print_array(int *a, int n)
{
	int m; /* helps with pointer arithemetic to navigate array */

	if (n > 0) /* checks if number of elements is valid */
	{
		for (m = 0; m < n; m++)
		{
			/* checks if current element is the last nth element */
			if (*(a + m) == *(a + n - 1))
				printf("%d\n", *(a + m));
			else
				printf("%d, ", *(a + m));
		}
	}
	else
		printf("\n");
}
