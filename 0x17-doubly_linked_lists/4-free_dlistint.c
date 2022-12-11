#include "lists.h"
#include <stdlib.h>

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	dlistint_t *to_free_node;

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current);
		current = next;
	}
}
