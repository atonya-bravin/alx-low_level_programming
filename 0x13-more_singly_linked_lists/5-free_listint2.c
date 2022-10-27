#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list and assigns NULL to its head
 *
 * @head: the head of the linked list
 *
 * Return: Always Nothing
 *
 */


void free_listint2(listint_t **head)
{
	listint_t *current_node = (*head)->next;
	listint_t *auxilarryNode;

	while (current_node != NULL)
	{
		auxilarryNode = current_node;
		current_node = current_node->next;
		free(auxilarryNode);
	}
	free(current_node);
	*head = NULL;
}
