#include "main.h"
#include <stdlib.h>

int determine_prime(int number, int counter);

/**
 * is_prime_number - finds prime numbers
 *
 * @n : number to find factors for
 *
 * Return: 1(success) or 0(fail)
 */

int is_prime_number(int n)
{
	int number = n;

	return (determine_prime(number, 1));
}

/**
 * determine_prime - determines if the number is a prime number
 *
 * @number: the number we are testing
 * @counter: the iterating number
 *
 * Return: 1(success) or 0(fail)
 */
int determine_prime(int number, int counter)
{
	if (number <= 1)
		return (0);

	if (number % counter == 0 && counter > 1)
		return (0);

	if ((number / counter) < counter)
		return (1);

	return (determine_prime(number, counter + 1));
}
