#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table we want to look into
 * @key: the key we are looking for
 * Return: value associated with the element, or NULL
**/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *curr_node;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	curr_node = ht->array[index];

	for (; curr_node != NULL; curr_node = curr_node->next)
	{
		if (strcmp(curr_node->key, key) == 0)
			return (curr_node->value);
	}

	return (NULL);
}
