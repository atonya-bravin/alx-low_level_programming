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
	listint_t *newNode = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (0);

	if (*head != NULL)
	{
	newNode->n = (*head)->n;
	newNode->next = (*head)->next;
	*head = newNode->next;
	}

	return (newNode->n);
}
