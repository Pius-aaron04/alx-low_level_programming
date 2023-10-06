#include "hash_tables.h"
/**
 * hash_table_set - adds or updates a value to a hash table
 * @ht: pointer to hash table
 * @key: key to the value
 * @value: value to add to hash table
 * Return: 1 on success otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (strlen(key) == 0 || !key || !value)
		return (0);
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if ((new_node->value == NULL) || (new_node->value == NULL))
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			strcpy(ht->array[index]->value, value);
		else
		{
			new_node->next = ht->array[index];8
			ht->array[index] = new_node;
		}
	}
	return (1);
}
