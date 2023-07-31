#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of liked list
 * @head: head of list
 * @n: data to store
 * Return: head to list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *current = *head;

	if (new == NULL)
		return (NULL);

	new->n = (int)n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
