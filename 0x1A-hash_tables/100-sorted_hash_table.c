#include "hash_tables.h"

/**
 * shash_table_create - function that creates a hash table.
 * @size: is the size of the array.
 *
 * Return: a pointer to the newly created hash table or NULL is something fails
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	if (size == 0)
		return (NULL);

	new_ht = calloc(1, sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);
	new_ht->size = size;
	new_ht->array = calloc(sizeof(hash_node_t *), size);
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}
	return (new_ht);
}

/**
 * shash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key. value must be duplicated.
 * value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index = 0;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_node = ht->array[index];
	while (new_node)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			free(new_node->value);
			new_node->value = strdup(value);
			return (1);
		}
		new_node = new_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into.
 * @key: is the key to look for.
 *
 * Return: the value associated with the element, or NULL
 * if key couldnt be found.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
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

/**
 * shash_table_print - function that prints a hash table.
 * @ht: is the hash table.
 *
 * Return: Nothing.
 */

void shash_table_print(const shash_table_t *ht)
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

/**
 * shash_table_delete - function that deletes a hash table.
 * @ht: is the hash table.
 *
 * Return: Nothing.
 */

void shash_table_delete(shash_table_t *ht)
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
				free(ht->array[ix]->key);
				free(ht->array[ix]->value);
				free(ht->array[ix]);
				ht->array[ix] = temp;
			}
		}
		free(ht->array);
	}
	free(ht);
}
