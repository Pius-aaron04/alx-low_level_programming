#include "lists.h"

/**
 * add_nodeint - adds node to the beginning of a linked list
 * @head: pointer to head
 * @n: value to add to list
 * Return: list head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = (int)n;
	new->next = *head;
	*head = new;

	return (new);
}

