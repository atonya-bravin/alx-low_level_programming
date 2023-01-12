#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: the hash table to be printed
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ht_element;
	unsigned long int index = 0;
	int not_null_elements = 0;

	if (ht == NULL)
		return;

	printf("{");
	if (ht != NULL)
	{
		for (index = 0; index < ht->size; index++)
		{
			ht_element = ht->array[index];
			while (ht_element)
			{
				if (not_null_elements != 0)
					printf(",");
				printf("'%s':", (char *)ht_element->key);
				printf("'%s'", (char *)ht_element->value);
				not_null_elements++;
				ht_element = ht_element->next;
			}
		}
	}
	printf("}\n");
}
