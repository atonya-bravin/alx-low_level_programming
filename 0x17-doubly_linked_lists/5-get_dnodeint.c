#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 *
 * @head: the head of the linked list
 * @index: the index of the node we want to return
 *
 * Return: nth node (success or NULL (fail)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int counter = 0;

	while (counter <= index)
	{
		if (counter == index)
			return (current_node5);
		if (counter != index && current_node->next == NULL)
			return (NULL);
		current_node = current_node->next;
		counter++;
	}
	if (counter <= index)
		return (current_node);
	return (NULL);

}
