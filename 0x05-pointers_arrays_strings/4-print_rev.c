#include "main.h"

/**
 * print_rev -prints string in reverse
 *
 * Description: takes in a string and prints it in reverse
 *
 * @s: string pointer
 *
 * Return: Always Nothing
 */

void print_rev(char *s)
{
	int string_length = 0;

	while (s[string_length] != '\0')
		string_length++;

	string_length--;

	while (string_length >= 0)
	{
		_putchar(s[string_length]);
		string_length--;
	}
	_putchar('\n');
}
