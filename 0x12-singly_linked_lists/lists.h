#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * list_t - name for struct list
 */
typedef struct list_t list_t;

/**
 * struct list_t - data structure
 * @str: string variable
 * @len: length of string
 * @next: pointer to next list node
 */

struct list_t
{
	char *str;
	size_t len;
	struct list_t *next;
};

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
