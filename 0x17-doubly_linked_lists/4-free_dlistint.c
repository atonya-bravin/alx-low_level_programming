#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a linked list starting from the head from left to right
 *
 * @head: the head of the linked list
 *
 * Return: 
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	dlistint_t *next;

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node);
		current_node = next;
	}
}
