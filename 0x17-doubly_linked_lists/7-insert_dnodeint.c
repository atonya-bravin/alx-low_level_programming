#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: the head of the linked list
 * @idx: the index to insert the new node
 * @n: the value of the new node
 *
 * Return: the head of the linked list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h;
	dlistint_t *next_node;
	dlistint_t *new_node;
	unsigned int counter = 0;

	if (*h)
	{
		/**
		 * minus 1 from the index
		 */
		idx--;
		while (current_node != NULL)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			if (counter == idx)
			{
				next_node = current_node->next;
				current_node->next = new_node;
				new_node->next = next_node;
			}
			current_node = current_node->next;
			counter++;
		}
	}
	if (counter <= idx)
		return (*h);
	return (NULL);
}
