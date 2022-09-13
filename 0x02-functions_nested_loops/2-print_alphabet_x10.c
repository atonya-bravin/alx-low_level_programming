#include "main.h"

/**
 * print_alphabet_x10 - console function
 *
 * Description: "prints alphabets ten times on the console"
 *
 * Retun: Nothing
 */

void print_alphabet_x10(void)
{
	int first_letter_number;
	int last_letter_number;
	int numberOf_times;

	for (numberOf_times = 1;
			numberOf_times <= 10;
			numberOf_times++)
	{
		first_letter_number = 97;
		last_letter_number = 122;
		while (first_letter_number <= last_letter_number)
		{
			_putchar(first_letter_number++);
		}
		 _putchar('\n');
	}
}
