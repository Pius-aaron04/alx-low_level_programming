#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a particular index
 * @head: head of list
 * @idx: index to insert value
 * @n: value to insert
 * Return: address to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node = *head;
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else if (idx == 1)
	{
		new_node->next = (*head)->next;
		(*head)->next = new_node;
		return (new_node);
	}

	while (node->next != NULL)
	{
		i++;
		if (i  == idx)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		node = node->next;
	}
	return (NULL);
}
