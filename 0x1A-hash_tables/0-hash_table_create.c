#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
**/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	if (!size)
		return (NULL);
	new_hash = calloc(1, sizeof(hash_node_t));
	if (!new_hash)
		return (NULL);

	new_hash->size = size;
	new_hash->array = calloc(size, sizeof(hash_node_t *));

	if (!new_hash->array)
	{
		free(new_hash);
		return (NULL);
	}
	return (new_hash);
}
