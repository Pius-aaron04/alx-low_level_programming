#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a paricular index
 * @head: list head
 * @index: node index
 * Return: pointer to node or NULL if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; current; i++, current = current->next)
		if (i == index)
			return (current);
	return (NULL);
}
