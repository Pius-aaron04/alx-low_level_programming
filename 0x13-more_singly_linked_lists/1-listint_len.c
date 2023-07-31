#include "lists.h"

/**
 * listint_len - gets number of nodes in a list
 * @h: list head
 * Return: number of nodes
 */


size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	listint_t *current = (listint_t *)h;

	while (current != NULL)
	{
		nodes++;
		current = current->next;
	}
	return (nodes);
}
