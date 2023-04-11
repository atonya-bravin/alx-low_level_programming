#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - this is basically a search algorithm
 * to search for an integer in a given array
 *
 * @array: the array to search for the value in.
 * @size: the size of our array
 * @value: the value to search for in the array
 *
 * Return: success(index) fail(-1)
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int array_ctr;

	for (array_ctr = 0; array_ctr < size; array_ctr++)
	{
		printf("Value checked array[%d] = [%d]\n", array_ctr, array[array_ctr]);
		if (array[array_ctr] == value)
			return (array_ctr);
	}
	return (-1);
}
