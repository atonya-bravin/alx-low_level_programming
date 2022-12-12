#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int counter = 0;
	while (counter <= index)
	{
		if (counter == index)
			return current_node;
		if (counter != index && current_node->next == NULL)
			return NULL;
		current_node = current_node->next;
		counter++;
	}
	if (counter <= index)
		return (current_node);
	return (NULL);

}
