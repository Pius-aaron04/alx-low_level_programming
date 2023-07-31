#include "lists.h"

/**
 * pop_listint - deletes the first node in a list
 * @head: pointer to head
 * Return: value of the node popped
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret_val = 0;

	if (*head != NULL)
	{
		ret_val = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (ret_val);
}
