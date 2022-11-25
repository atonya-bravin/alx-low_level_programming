#include <stdlib.h>

/**
 * array_range - creates an array of integes
 *
 * @min: minimum value in the integer array
 * @max: maximum value in the integer array
 *
 * Return: always pointer to integer array
 *
 */

int *array_range(int min, int max)
{
	int array_size;
	int *integer_array;
	int index = 0;

	if (min > max)
		return (NULL);
	array_size = max - min;
	integer_array = malloc(sizeof(int) * array_size);
	if (integer_array == NULL)
		return (NULL);
	while (min <= max)
	{
		integer_array[index] = min;
		min++;
	}
	return (integer_array);
}
