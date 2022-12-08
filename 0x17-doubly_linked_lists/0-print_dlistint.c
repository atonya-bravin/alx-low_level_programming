#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dlistint - counts and returns the number of elements in a list while
 * printing them
 *
 * @h: the head to the list
 *
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_of_nodes++;
	}
	printf("%d\n", h->n);
	return (number_of_nodes + 1);

}
