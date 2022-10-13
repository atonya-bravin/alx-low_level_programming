#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: the array we should search the integer in
 * @size: the number of elements in the array
 * @cmp: the function pointer to the passed function
 *
 * Return:  index of the first element for which the cmp function
 * does not return 0
 * -1 (no matches)
 *  -1(size <= 0)
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int elements_counter = 0;

	(void) array;
	if (size <= 0)
		return (-1);
	for (; elements_counter < size; elements_counter++)
	{
		if (cmp(array[elements_counter]) != 0)
			return (elements_counter);
	}
	return (-1);
}
