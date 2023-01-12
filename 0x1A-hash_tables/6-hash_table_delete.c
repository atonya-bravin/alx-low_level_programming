#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: the hash table to be printed
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ht_element, *next_node;
	unsigned long int index = 0;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		ht_element = ht->array[index];
		while (ht_element)
		{
			next_node = ht_element->next;
			free(ht_element);
			ht_element = next_node;
		}
	}
}
