#include "main.h"

/**
 * print_alphabet - function to print alphabets 
 *
 * Description: "The alphabets must be in lowercase"
 *
 * Return: Nothing should be returned
 */
void print_alphabet(void)
{
	int first_letter_number = 97;
	int last_letter_number = 122;

	while (first_letter_number <= last_letter_number)
	{
		_putchar(first_letter_number++);
	}
	_putchar('\n');
}
