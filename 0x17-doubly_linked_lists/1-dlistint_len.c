#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * dlistint_len - counts and returns the number of elements in a list
 *
 * @h: the head to the list
 *
 * Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes + 1);

}
