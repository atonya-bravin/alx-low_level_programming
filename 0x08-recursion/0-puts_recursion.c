#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * Description: "takes in a string pointer
 * prints character by character using recursion technique"
 *
 * @s: string pointer
 *
 * Return: Always Nothing
 */

void _puts_recursion(char *s)
{
	int character_counter = 0;
	char *string_pointer = s;

	if (string_pointer[character_counter] == '\0')
	{
		_putchar('\n');
		return;
	}

	else
	{
		_putchar(string_pointer[character_counter]);
		character_counter++;
		_puts_recursion(&string_pointer[character_counter]);
	}
}
