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

	if (c > 0)
		last_digit = c % 10;
	else
		last_digit = (c + (c * -2)) % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
