#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * Description: takes a number of elements in an array and prints them
 *
 * @a: the integer array pointer
 * @n: the number of elements in the array
 *
 * Return: Always Nothing
 *
 */

void print_array(int *a, int n)
{
	int array_counter;
	int array_length = n;

	for (array_counter = 0; array_counter < array_length; array_counter++)
	{
		if (array_counter == (array_length - 1))
			printf("%d", a[array_counter]);
		else
			printf("%d, ", a[array_counter]);
	}
	putchar('\n');
}
