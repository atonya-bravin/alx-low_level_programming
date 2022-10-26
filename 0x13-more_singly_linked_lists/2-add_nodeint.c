#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node to the beggining of a linked list
 *
 * @head: the head of the linked list
 * @n: the value of the newly added node
 *
 * Return: the head of our linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
	}
	else
	{
		newNode = malloc(sizeof(listint_t));
		if (newNode == NULL)
			return (NULL);
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}
	return (*head);

}
