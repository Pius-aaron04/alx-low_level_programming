#include "hash_tables.h"

/**
 * hash_table_print - print data in hash table
 * @ht: hash_table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *pair;
	unsigned long int i;
	int first_element = 0;

	if (ht == NULL)
	{
		printf("{}\n");
		return;
	}

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		pair = ht->array[i];
		while (pair)
		{
			if (pair->key || pair->value)
			{
				if (first_element)
					printf(", ");
				else
					first_element = 1;
				printf("'%s': ", pair->key);
				if (strlen(pair->value) == 0)
					printf("nil");
				else
					printf("'%s'", pair->value);
			}
			pair = pair->next;
		}
	}
	puts("}");
}
