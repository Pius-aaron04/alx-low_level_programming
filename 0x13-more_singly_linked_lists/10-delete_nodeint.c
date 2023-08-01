#include "lists.h"

/**
 * delete_nodeint_at_index - removes node at specifies index
 * @head: head of the list
 * @index: node position
 * Return: 1 on success and -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (temp = *head; temp->next != NULL; temp = temp->next)
	{
		i++;
		if (i == index)
		{
			node = temp->next;
			temp->next = node->next;
			free(node);
			return (1);
		}
	}
	return (-1);
}
