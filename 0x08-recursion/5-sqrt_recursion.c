#include "main.h"

int find_sqrt(int number, int counter);

/**
 * _sqrt_recursion - calculates and returns the natural squareroot of a number
 *
 * @n: the number to find squre root of
 * 
 * Return: square root (success) or -1(fail)
 */


int _sqrt_recursion(int n)
{
	int number = n;

	return (find_sqrt(number, 1));
}
/**
 * find_sqrt - Calculates natural square root
 * 
 * @number: number to calculate the square root
 * @counter: iterate number
 *
 * Return: the natural square root
 */
int find_sqrt(int number, int counter)
{
	int sqrt = counter * counter;

	if (sqrt > number)
		return (-1);

	if (sqrt == number)
		return (counter);

	return (find_sqrt(number, counter + 1));
}
