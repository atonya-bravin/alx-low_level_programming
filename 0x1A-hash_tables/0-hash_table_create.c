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
	hash_table_t *my_hash_table = malloc(size);

	return (my_hash_table);
}
