#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at specified index
 * @head: pointer to first node
 * @index: node position
 * Return: 1 on success otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			free(*head);
			*head = (*head)->next;
			return (1);
		}
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
	}

	for (; current; current = current->next, i++)
	{
		if (i == index && current->next != NULL)
		{
			current->prev->next = current->next;
			free(current);
			current = NULL;
			return (1);
		}
	}
	return (-1);
}
