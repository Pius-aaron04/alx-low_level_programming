#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * check - helper function for jump_list func. checks for @value
 * from pointer @node in the linked list to @pos index
 * @node: present node
 * @pos: position to jump to
 * @value: value to check for in the list
 * Return: pointer to the value if found else NULL is returned
 */

listint_t *check(listint_t *node, size_t pos, int value)
{
	while (node && node->index <= pos)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}
	return (NULL);
}


/**
 * jump_list - searches a singly linked list for a value
 * @list: pointer to the head of the list
 * @size: size/length of linked list
 * @value: value to search in array for
 * Return: pointer to the value if found else NULL is returned
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp;
	size_t k, l, m;

	m = sqrt((double)size);

	if (!list)
		return (NULL);

	if (list->n == value)
		return (list);
	printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);

	for (k = m; k < size; k += m)
	{
		temp = list;

		for (l = 0; l < m; l++)
		{
			if (list)
				list = list->next;
		}
		if (!list)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", temp->index, k - m);
			return (check(temp, size - 1, value));
		}
		printf("Value checked at index [%ld] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		if (list->n > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", temp->index, k);
			return (check(temp, list->index, value));
		}

	}
	return (NULL);
}
