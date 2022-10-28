#include "lists.h"

/**
 * get_nodeint_at_index - finds and returns the node at index n
 *
 * @head: the head of our linked list
 * @index: the index of the node to look for
 *
 * Return: the node to at n index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodeCounter = 0;
	unsigned int currentNode_index = 0;
	listint_t *temp_node = head;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		head = head->next;
		nodeCounter++;
	}

	if (nodeCounter < index)
		return (NULL);

	while (temp_node != NULL && currentNode_index <= index)
	{
		if (currentNode_index ==  index)
			break;
		currentNode_index++;
		temp_node = temp_node->next;
	}
	return (temp_node);
}
