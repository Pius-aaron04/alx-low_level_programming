#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 * @head: pointer to list head
 * @n: integer value to add to list
 * Return: pointer to the head of list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = (int)n;
	while (current)
	{
		if (current->next == NULL)
			break;
		current = current->next;
	}
	if (current == NULL)
	{
		*head = new_node;
		return (*head);
	}
	current->next = new_node;
	new_node->prev = current;
	return (*head);
}
