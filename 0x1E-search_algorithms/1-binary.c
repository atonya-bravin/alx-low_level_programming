#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * bin_search_algo - the algorithm behing the functioning of the search
 *
 * @array: the array to search the value from
 * @value: the value to search in the array
 * @low: the low point of the array
 * @high: the high point of the array
 *
 * Return: success(index) fail(-1)
 */
int bin_search_algo(int *array, int value, int low, int high)
{
	int mid = (low + high) / 2;
	int counter;

	printf("Searching in array: ");
	for (counter = low; counter <= high; counter++)
	{
		if (counter != low)
			printf(", %d", array[counter]);
		else
			printf("%d", array[counter]);
	}
	printf("\n");

	if (mid == high)
		return (-1);
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		high = mid - 1;
	else
		low = mid + 1;

	return (bin_search_algo(array, value, low, high));
}

/**
 * binary_search - a function that impleents binary search algorithm
 *
 * @array: the array to search for the value from
 * @size: the size of our array
 * @value: the value to search for in the array
 *
 * Return: success(index) fail(-1)
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (bin_search_algo(array, value, 0, size - 1));
}
