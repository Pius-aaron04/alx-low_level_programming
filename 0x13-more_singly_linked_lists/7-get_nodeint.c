#include "lists.h"

/**
 * get_nodeint_at_index - gets node at specified index
 * @head: list head
 * @index: index to search
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		if (i == index)
			return (current);
		head = head->next;
		i++;
	}
	return (NULL);
}
