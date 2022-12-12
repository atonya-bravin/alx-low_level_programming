#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of
 * dlistint_t linked list
 *
 * @head: head of the linked list
 *
 * Return: sum of the data in the list
 *
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
