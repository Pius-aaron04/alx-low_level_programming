#include "lists.h"

/**
 * free_list - deallocates linked list
 * @head: list head
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		free(temp);
		head = head->next;
	}
}
