#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *pair, *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		pair = ht->array[i];
		while (pair)
		{
			if (pair->key != NULL)
				free(pair->key);
			if (pair->value != NULL)
				free(pair->value);
			temp = pair->next;
			free(pair);
			pair = temp;
		}
	}
	free(ht->array);
	free(ht);
}
