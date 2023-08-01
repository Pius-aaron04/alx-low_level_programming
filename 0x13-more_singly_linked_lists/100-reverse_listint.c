#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: head of list
 * Return: pointer to reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *prev;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	prev = NULL; /* holds the value of the head before moving forward*/
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (prev);
}
