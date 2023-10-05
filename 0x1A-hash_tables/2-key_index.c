#include "hash_tables.h"

/**
 * key_index - gets the index of key on the hash table
 * @key: key to search for on the table
 * @size: size of hash table
 * Return: index of key value pair on the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
