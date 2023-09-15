#include "lists.h"

/**
 * free_dlistint - frees nodes in a doubly linked list
 * @head: pointer to list end
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	if (head == NULL)
		return;

	while (current)
	{
		if (current->next == NULL)
			break;
		current = current->next;
		if (current != NULL || current->prev != NULL)
			free(current->prev);
	}
	free(current);
}
