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
	listint_t *current_free_element;
	listint_t *auxilary_node;
	listint_t *newNode;

	if (head != NULL)
	{
		newNode = malloc(sizeof(listint_t));
		newNode->n = (*head)->n;
		newNode->next = (*head)->next;
		(*head)->next = newNode;

		current_free_element = *head;


		while (current_free_element != NULL)
		{
			auxilary_node = current_free_element;
			current_free_element = current_free_element->next;
			free(auxilary_node);
		}
		free(current_free_element);
		*head = NULL;
	}
}
