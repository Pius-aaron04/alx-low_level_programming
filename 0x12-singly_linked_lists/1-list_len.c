#include "lists.h"

/**
 * list_len - gets the length of a linked list
 * @h: list head
 * Return: length of list
 */

size_t list_len(const list_t *h)
{
	list_t *current = (list_t *)h;
	size_t len = 0;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
