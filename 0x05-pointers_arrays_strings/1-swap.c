#include "main.h"

/**
 * swap_int - swaps two integers
 *
 * Description: takes in two integers and swaps thier values
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: Always Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
