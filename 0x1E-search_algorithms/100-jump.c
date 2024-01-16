#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
	double m;
	size_t k, i, l;

	if (!array)
		return (-1);

	m = sqrt((double)size - 1);
	for (k = 0; k <= size + m; k += m)
	{
		if (k <= size)
			printf("Value checked array[%ld] = [%d]\n", k, array[k]);
		if (array[k] >= value || k > size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", l, k);
			for (i = l; i < size; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i,
					array[i]);
				if (array[i] == value)
					return (i);
			}

			return (-1);
		}
		l = k;
	}
	k -= k - size - 1;
	if (array[k] != value)
		return (-1);
	return (1);
}
