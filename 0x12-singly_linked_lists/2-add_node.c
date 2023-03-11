#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node -  adds a new node at the beginning of our list
 *
 * @head: the head of the linked list we are working with
 * @str: the value of the new node of the linked list
 *
 * Return: The address to the head pointer
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int string_length = 0;
	int char_ctr = 0;

	for (char_ctr = 0; str != NULL && str[char_ctr] != '\0'; char_ctr++)
		string_length++;

	if (head != NULL && str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		if (new_node->str == NULL)
			return (NULL);
		new_node->len = string_length;
		new_node->next = *head;

		*head = new_node;
	}

	return (new_node);
}
