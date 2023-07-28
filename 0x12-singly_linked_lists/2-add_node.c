#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node to the beginning
 * @head: head of list
 * @str: string value of new node
 * Return: pointer first node of the list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL || (strdup(str)) == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		new->str = "(nil)";
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
