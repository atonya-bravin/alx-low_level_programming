#include "lists.h"
#include <stdlib.h>
#include <string.h>

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
	list_t *new_node, *link;
	unsigned int string_length = 0;

	string_length = get_string_len(str);

	if (str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = NULL;
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = string_length;
		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}
		link = *head;
		while (link != NULL)
		{
			if (link->next == NULL)
			{
				link->next = new_node;
				break;
			}
			link = link->next;
		}
	}
	return (new_node);
}

/**
 * get_string_len - finds the length of a string
 * @str: string to be used
 * Return: string length
 */

size_t get_string_len(const char *str)
{
	unsigned int string_length = 0;
	int char_ctr = 0;

	for (char_ctr = 0; str != NULL && str[char_ctr] != '\0'; char_ctr++)
	{
		string_length++;
	}
	return (string_length);
}
