#include "lists.h"

/**
 * sum_listint - calculates the sum integers in the list
 * @head: list head
 * Return: sum of int values in list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
