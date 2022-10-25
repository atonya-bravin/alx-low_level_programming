#include "lists.h"

/**
 * list_len - calculates and returns the number of elements in a linked list
 *
 * @h - the linked list we are calculating the number of elements
 *
 * Return: the number of elements in the linked list.
 */

size_t list_len(const list_t *h)
{
	const list_t *temp_node = h;
	unsigned int node_counter = 0;

	while (temp_node != NULL)
	{
		temp_node = temp_node->next;
		node_counter++;
	}
	return (node_counter);
}
