#include "lists.h"

/**
 * sum_dlistint - finds the sum of all integers in a linked list
 * @head: pointer to the first node
 * Return: sum of integers in list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (!head)
		return (0);

	for (; current; current = current->next)
		sum += current->n;
	return (sum);
}
