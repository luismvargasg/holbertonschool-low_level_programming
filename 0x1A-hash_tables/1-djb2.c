#include "hash_tables.h"

/**
 * hash_djb2 - function implementing the djb2 algorithm.
 * @str: key to access the node in the hash table.
 *
 * Return: hash, index in hash table to access the node.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
