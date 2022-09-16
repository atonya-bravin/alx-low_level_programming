#include "main.h"

/**
 * print_most_numbers - printer function
 *
 * Description: prints 0 to 9 except 2 and 4
 *
 * Return: Always Nothing
 */

void print_most_numbers(void)
{
	int number_counter = 0;

	while (number_counter < 10)
	{
		if ((number_counter != 2) || (number_counter != 4))
		{
			_putchar(number_counter + '0');
		}
		number_counter++;
	}
	_putchar('\n');
}
