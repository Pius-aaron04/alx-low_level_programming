#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of table array
 * Return: pointer to creaated hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = malloc(size * sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
