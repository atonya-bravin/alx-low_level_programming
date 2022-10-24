#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

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

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		node_counter++;
		h = h->next;
	}
	return (node_counter);
}
