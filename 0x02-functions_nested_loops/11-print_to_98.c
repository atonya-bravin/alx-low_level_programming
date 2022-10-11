#include "main.h"

/**
 * print_to_98 - print from number to 98
 *
 * Description: prints to the screen digits from the imput parameter
 *to 98 ile in reverse if above 98 or forward if less than 98
 * 
 * @n: the number that is passed to our function
 *
 * Return: Nothing
 *
 */

void print_to_98(int n)
{
	int start_number = n;
	int end_number = 98;
	
	while (start_number <= end_number)
	{
		 if (start_number <= end_number)
		 {
			if (start_number < 10)
			{
				_putchar(start_number + '0');
			}
			else
			{
				_putchar((((int)(start_number / 10)) + '0'));
				_putchar((start_number % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		 }
		 else
			 break;
		start_number++;
	}
	while (start_number >= end_number)
	{
		if (start_number > end_number)
		{
			if (start_number < 10)
			{
				_putchar(start_number + '0');
			}
			else
			{
				_putchar((((int)(start_number / 10)) + '0'));
				_putchar((start_number % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		start_number--;
	}
	_putchar('\n');
}
