#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table to add the data to
 * @key: the key of the value beign added
 * @value: the value to be added and associated to the key
 *
 * Return: 1(success) or 0(fail)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	long unsigned int index = 0;
	hash_node_t element;
	hash_node_t new_array_node;

	if (ht == NULL || strcmp(key, "") == 0 || key == NULL)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	element = ht->array[index];

	if (element && strcmp(key, element->key) == 0)
	{
		free(element->value);
		element->value = strdup(value);
		return (1);
	}
	new_array_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_array_node->key = strdup(key);
	new_array_node->value = strdup(value);
	new_array_node->next = ht->array[idx];
	ht->array[idx] = new_array_node;
	return (1);
}
