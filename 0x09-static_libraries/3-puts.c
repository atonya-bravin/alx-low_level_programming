#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * Description: takes in a string and prints characters to screen one by one
 *
 * @str: string pointer
 *
 * Return: Always Nothing
 */

void _puts(char *str)
{
	int character_counter = 0;

	while (str[character_counter] != '\0')
	{
		_putchar(str[character_counter]);
		character_counter++;
	}
	_putchar('\n');
}
