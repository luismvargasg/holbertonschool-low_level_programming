#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table.
 *
 * Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int ix = 0;

	if (ht)
	{
		for (; ix < ht->size; ix++)
		{
			while (ht->array[ix] != NULL)
			{
				temp = ht->array[ix]->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				ht->array[ix] = temp;
			}
		}
		free(ht->array);
	}
	free(ht);
}
