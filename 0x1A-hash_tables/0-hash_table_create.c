#include "hash_tables.h"
#include <stdlib.h>

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_hash_table = malloc(size);

	return my_hash_table;
}
