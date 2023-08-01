#include "lists.h"

/**
 * print_listint - prints int value in list
 * @h: list head
 * Return: number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	listint_t *current = (listint_t *)h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		nodes++;
		current = current->next;
	}
	return (nodes);
}
