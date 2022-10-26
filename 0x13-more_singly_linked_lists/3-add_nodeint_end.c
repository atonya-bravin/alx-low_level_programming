#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint_end - adds a new node at the end of out linked list
 *
 * @head: the head of our linked list
 * @n: the value of our new node
 *
 * Return: the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *current_node;
	listint_t *lastNode;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->next = NULL;
		(*head)->n  = n;
		return (*head);
	}
	else
	{
		current_node = *head;
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->next = NULL;
		newNode->n = n;
		while (current_node != NULL)
		{
			lastNode = current_node;
			current_node = current_node->next;
		}
		lastNode->next = newNode;
	}
	return (lastNode);

}
