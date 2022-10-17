#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * Description: "takes in a string
 * ptints the string in reverse, each character after another"
 *
 * @s: string_pointer
 *
 * Return: Always Nothing
 */

void _print_rev_recursion(char *s)
{
	int string_length = 0;
	int char_counter = 0;

	for (char_counter = 0; s[char_counter] != '\0'; char_counter++)
		string_length++;


	for (char_counter = 0; char_counter <= string_length; string_length--)
	{
		printf("%c", s[string_length]);
	}
}
