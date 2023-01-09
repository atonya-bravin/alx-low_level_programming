#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - retrives the value of a given key
 *
 * @ht: the hash table to work on
 * @key: the key of the value to be retrived
 *
 * Return: the value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *element = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);

	element = ht->array[index];
	if (element == NULL)
		return (NULL);

	return (element->value);
}
