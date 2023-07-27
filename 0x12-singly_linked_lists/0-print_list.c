#include "lists.h"

/**
 * print_list - prints data stored in a linked list;
 * @h: linked list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	list_t *current = (list_t *)h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
			n++;
		}
		else
		{
			printf("[%lu] %s\n", current->len, current->str);
			n++;
		}
		current = current->next;
	}
	return (n);
}
