#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table.
 *
 * Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int ix = 0, flag = 0;

	if (ht)
	{
		printf("{");
		for (; ix < ht->size; ix++)
		{
			while (ht->array[ix] != NULL)
			{
				if (flag == 1)
				{
					printf(", ");
					flag = 0;
				}
				printf("'%s': '%s'", ht->array[ix]->key, ht->array[ix]->value);
				ht->array[ix] = ht->array[ix]->next;
				flag =  1;
			}
		}
		printf("}\n");
	}
}
