#include "lists.h"
#include <stdlib.h>

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	while (head)
	{
		if (current_node->next != NULL)
			current_node = current_node->next;
		else
			free(current_node);

	}
}
