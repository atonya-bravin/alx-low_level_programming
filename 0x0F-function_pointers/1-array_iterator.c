#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 *
 * @array: the array to use elements of
 * @size: the size of the array
 * @action: the function pointer pointing to passed function
 *
 * Return: Always Nothing
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t elements_counter = 0;

	if (action != NULL && array != NULL)
	{
		for (; elements_counter < size; elements_counter++)
			action(array[elements_counter]);
	}
}
