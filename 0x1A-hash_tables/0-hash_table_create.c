#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates an empty hash table
 *
 * @size: the size of the hash table
 *
 * Return: the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_htable = malloc(sizeof(hash_table_t));
	hash_node_t **htable_array;
	unsigned long int index = 0;

	if (my_htable == NULL)
		return (NULL);
	htable_array = malloc(sizeof(hash_node_t *) * size);

	for (index = 0; index < size; index++)
	{
		htable_array[index] = NULL;
	}

	my_htable->size = size;
	my_htable->array = htable_array;

	return (my_htable);
}
