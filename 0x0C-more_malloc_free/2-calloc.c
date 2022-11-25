#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of elements in the array
 * @size: size of each array
 *
 * Return: NULL (fail)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array_allocation;
	unsigned int members_counter;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array_allocation = malloc(size * nmemb);

	if (array_allocation == NULL)
		return (NULL);

	for (members_counter = 0; members_counter <= nmemb; members_counter++)
		array_allocation[members_counter] = '\0';
	return (array_allocation);
}
