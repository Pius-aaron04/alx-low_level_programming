#include "lists.h"

/**
 * print_dlistint - prints the contents of a doubly linked list
 * @h: list head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current;
	size_t nodes = 0;

	current = (dlistint_t *)h;

	if (current == NULL)
		return (nodes);
	for (; current != NULL; current = current->next, nodes++)
		printf("%d\n", current->n);
	return (nodes);
}
