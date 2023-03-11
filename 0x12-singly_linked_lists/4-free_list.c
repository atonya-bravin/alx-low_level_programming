#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees list
 *
 * @head: the head to the list we are to free
 *
 * Return: Always Nothing
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
