#include "hash_tables.h"
/**
 * hash_table_set - adds or updates a value to a hash table
 * @ht: pointer to hash table
 * @key: key to the value
 * @value: value to add to hash table
 * Return: 0 on success otherwise 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (1);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if ((new_node->value == NULL) || (new_node->value == NULL))
		return (1);
	index = key_index((const unsigned char *)key, 1024);

	if (ht->array[index] != NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (0);
}
