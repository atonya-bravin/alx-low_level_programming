#include "main.h"

/**
 * print_last_digit - last digit printer
 *
 * Description: prints the last digit of a number
 *
 * @c: the number to print last digit to
 *
 * Return: Always last digit
 *
 */

int print_last_digit(int c)
{
	int last_digit;

	last_digit = (c % 10);

	if (last_digit < 0)
	{
		last_digit = (-1 * last_digit);
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
