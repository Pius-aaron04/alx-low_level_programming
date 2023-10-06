#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value of key
 * @ht: hash table
 * @key: key to search for
 * Return: value of @key on the hash table
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *pair;

	if (!key || !ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	pair = ht->array[index];

	/* checks if hash node is occupied */
	if (!pair || !pair->key)
		return (NULL);

	/* verifies existence of key */
	while (pair)
	{
		if (strcmp(pair->key, key) == 0)
			return (pair->value);
		pair = pair->next;
	}
	return (NULL);
}
