#include "lists.h"
/**
 * add_dnodeint - add a node to a doubly linked list
 * @head: head of list
 * @n: new data to add
 * Return: pointer to newly added node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return NULL;
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = (int)n;

	if (*head == NULL)
	{
		printf("New node with data: %d added\n", new_node->n);
		return (new_node);
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	return (*head);
}
