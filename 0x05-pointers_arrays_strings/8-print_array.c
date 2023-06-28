#include "main.h"
#include <stdio.h>
/**
 * print_array - displays n numbers of elements of an array
 * @n: number of elements to be displayed
 * @a: array
 */

void print_array(int *a, int n)
{
	int m;

	if (n > 0 && !(n > (int)(sizeof(a))))
	{
		for (m = 0; m < n; m++)
		{
			if (*(a + m) == *(a + n - 1))
				printf("%d\n", *(a + m));
			else
				printf("%d, ", *(a + m));
		}
	}
	else
		printf("\n");
}
