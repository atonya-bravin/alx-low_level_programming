#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - creates  a doubly linked list and adds elements to beginning
 *
 * @head: the head of the linked list
 * @n: the value of the created node
 *
 * Return: the head of the linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current_node;

	if (*head)
	{
		if ((*head)->prev != NULL)
		{
			current_node = *head;
			if (new_node == NULL)
			{
				free(new_node);
				return (NULL);
			}
		}
		while (current_node->prev != NULL)
			current_node = current_node->prev;
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = current_node;
		current_node->prev = new_node;
		*head = new_node;
	}
	else
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
		{
			free(new_node);
			free(*head);
			return (NULL);
		}
		current_node = *head;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		(*head)->n = n;
	}
	return (*head);
}
