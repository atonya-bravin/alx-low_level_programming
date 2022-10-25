#include "lists.h"
#include <stdlib.h>

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
	list_t *newNode = malloc(sizeof(list_t));
	unsigned int string_length = 0;
	int char_ctr = 0;

	if (!newNode)
	{
		free(newNode);
		exit(-1);
	}
	for (char_ctr = 0; str != NULL && str[char_ctr] != '\0'; char_ctr++)
	{
		string_length++;
	}
	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
		if (!(*head))
		{
			free(*head);
			exit(-1);
		}
		(*head)->str = strdup(str);
		(*head)->len = string_length;
	}
	else
	{
		if (str == NULL)
		{
			newNode->str = "(nil)";
			newNode->len = 0;
		}
		else
		{
			newNode->str = strdup(str);
			newNode->len = string_length;
		}
		newNode->next = *head;
		*head = newNode;
	}
	return (*head);
}
