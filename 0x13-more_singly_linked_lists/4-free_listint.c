#include "lists.h"

/**
 * free_listint - frees a linked list containing only integers
 * @head: list head
 * Return: Nthing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
}
