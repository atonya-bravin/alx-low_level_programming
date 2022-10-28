#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 *
 * @head: the head of the linked list
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *auxilaryNode = *head;
	int value = 0;

	if (*head == NULL)
		return (0);

	if (*head != NULL)
	{
		value = (*head)->n;
		auxilaryNode = *head;
		*head = (*head)->next;
		free(auxilaryNode);
	}

	return (value);
}
