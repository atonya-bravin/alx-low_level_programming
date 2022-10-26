#include "lists.h"

/**
 * listint_len - gets the total number of elements in a linked list
 *
 * @h: the head of the linked list
 *
 * Return: number of elements in the linked list
 *
 */
size_t listint_len(const listint_t *h)
{
	unsigned int elements_counter = 0;
	const listint_t *current_element = h;

	while (current_element != NULL)
	{
		current_element = current_element->next;
		elements_counter++;
	}
	return (elements_counter);
}
