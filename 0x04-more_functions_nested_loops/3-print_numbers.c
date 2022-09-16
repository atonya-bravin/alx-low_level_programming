#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Description: prints the numbers 0 to 9 and the ends with a new line
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int number_counter = 0;

	while (number_counter < 10)
	{
		_putchar(number_counter + '0');
		number_counter++;
	}
	_putchar('\n');
}
