#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements in the linked list
 *
 * @h: the head of the linked list to print elements of
 *
 * Return: Number of elements in the linked list
 *
 */

size_t print_listint(const listint_t *h)
{
	unsigned int elements_counter = 0;
	const listint_t *current_element = h;

	while (current_element != NULL)
	{
		printf("%d\n", current_element->n);
		current_element = current_element->next;
		elements_counter++;
	}
	return (elements_counter);
}
