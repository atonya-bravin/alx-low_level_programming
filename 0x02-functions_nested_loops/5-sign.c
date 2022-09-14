#include "main.h"

/**
 * print_sign - sign printer
 *
 * Description: prints the sign of a number
 *
 * @n: the number that we determine the sign of
 *
 * Return: 1 (greater than zero), 0 (equal to zero), -1 (less than zero)
 */

int print_sign(int n)
{
	int return_value;

	if (n > 0)
	{
		_putchar('+');
		return_value = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		return_value = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		return_value = -1;
	}
	return (return_value);
}
