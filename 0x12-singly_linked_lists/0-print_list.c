#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t
 *
 * @h: the head of the linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int node_counter = 0;
	const list_t *temp_node = h;

	while (temp_node != NULL)
	{
		if (temp_node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp_node->len, temp_node->str);
		node_counter++;
		temp_node = temp_node->next;
	}
	return (node_counter);
}
