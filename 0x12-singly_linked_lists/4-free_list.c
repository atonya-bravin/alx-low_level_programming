#include "lists.h"

/**
 * free_list - frees list
 *
 * @head: the head to the list we are to free
 *
 * Return: Always Nothing
 */

void free_list(list_t *head)
{
	list_t *temp_node = head;

	while (temp_node != NULL)
	{
		original_node = temp_node->next;
		free(temp_node->str);
		free(temp_node);
		temp_node = original_node;
	}
}
