#include "lists.h"
#include <stdlib.h>


/**
 * add_node_end - adds a new node at the end
 *
 * @head: the head to the linkded list
 * @str: string to add as value of the new node
 *
 * Return: linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp_node;

	if(head == NULL)
		head = malloc(sizeof(list_t));
	else
	{
		temp_node->next = malloc(sizeof(list_t));
		temp_node->str = str;
		head = temp_node;
	}
	return (*head);
}
