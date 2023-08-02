#include "lists.h"

/**
 * free_listint2 - frees list and set head to NULL
 * @head: pointer to head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head && *head)
	{
		if ((*head)->next != NULL)
		{
			current = (*head)->next;

			while (current != NULL)
			{
				temp = current;
				current = current->next;
				free(temp);
			}
			free(*head);
			*head = NULL;
		}
		else
		{
			free(*head);
			*head = NULL;
		}
	}
}
