#include "lists.h"

/**
 * sum_listint - finds and returns the sum of all the values in a linked list
 *
 * @head: the head of our node
 *
 * Return: sum of the values of all nodes in a linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return sum;
}
