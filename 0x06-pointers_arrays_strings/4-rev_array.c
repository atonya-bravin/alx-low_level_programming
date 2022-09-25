#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array
 *
 * Description: takes an array and reverses it
 *
 * @a: integer array pointer
 * @n: number of elements in array
 *
 * Return: Always Nothing
 */

void reverse_array(int *a, int n)
{
	int *integer_array = a;
	int temp;
	int number_of_elements = n;
	int elements_counter;


	for (elements_counter = 0;
			elements_counter < number_of_elements - 1;
			elements_counter++)
		integer_array++;

	for (elements_counter = 0;
			elements_counter < number_of_elements / 2;
			elements_counter++)
	{
		temp = a[elements_counter];
		a[elements_counter] = *integer_array;
		*integer_array = temp;
		integer_array--;

	}
}
