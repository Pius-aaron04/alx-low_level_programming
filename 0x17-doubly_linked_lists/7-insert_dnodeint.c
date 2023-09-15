#include "lists.h"

/**
 * dlistint_t *insert_dnodeint_at_index - inserts node at specified index
 * @h: pointer to first node
 * @idx: index or possition to insert node
 * @n: data to add
 * Return: address of new_node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		free(new_node);
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (current)
	{
		if (i == idx)
		{
			new_node->next = current;
			new_node->prev = current->prev;
			current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}
	free(new_node);
	if (i == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
