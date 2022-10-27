#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees our linked list
 *
 * @head: the head of our linked list
 *
 * Return: Always Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	listint_t *auxilaryNode;

	while (current_node != NULL)
	{
		auxilaryNode = current_node;
		current_node = current_node->next;
		free(auxilaryNode);
	}
	free(current_node);
}
