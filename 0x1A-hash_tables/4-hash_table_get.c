#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into.
 * @key: is the key to look for.
 *
 * Return: the value associated with the element, or NULL
 * if key couldnt be found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *cursor = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	cursor = ht->array[index];
	while (cursor)
	{
		if (strcmp(cursor->key, key) == 0)
			return (cursor->value);
		cursor = cursor->next;
	}
	return (NULL);
}
