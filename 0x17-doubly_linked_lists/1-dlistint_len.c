#include "lists.h"

/**
 * dlistint_len - counts the number of nodes in a double linked list
 * @h: list head
 * Return: number nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	size_t i = 0;

	for (current = (dlistint_t *)h; current != NULL; current = current->next)
		i++;

	return (i);
}
