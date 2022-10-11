#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always Nothing
 */

void times_table(void)
{
	int base_multiple;
	int counter;
	int product;

	for (base_multiple = 0; base_multiple < 10; base_multiple++)
	{
		for (counter = 0; counter < 10; counter++)
		{
			product = base_multiple * counter;
			if (product < 10)
			{
				if (counter < 10 && counter > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(product + '0');
			}
			else
			{
				if (counter < 10 && counter > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((((product - (product % 10)) / 10) + '0'));
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
