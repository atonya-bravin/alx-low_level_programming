#include "main.h"
#include <stdlib.h>


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
	int array_size = size;
	int number_of_members = nmemb;
	char *array_allocation;
	int members_counter;

	if (number_of_members == 0 || size == 0)
		return (NULL);

	array_allocation = malloc(array_size * number_of_members);

	if (array_allocation == NULL)
		return (NULL);

	for (members_counter = 0; members_counter < number_of_members;
			members_counter++)
		array_allocation[members_counter] = '0';

	return (array_allocation);
}
