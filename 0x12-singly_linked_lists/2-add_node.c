#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node to the beginning
 * @h: head of list
 * @string: string value of new node
 * Return: pointer first node of the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
