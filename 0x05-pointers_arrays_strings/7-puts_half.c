#include "main.h"

/**
 *puts_half - prints a string to stdout
 *
 * Description: takes in a string and prints half of it
 *
 * @str: string pointer
 *
 * Return: Always Nothing
 */

void puts_half(char *str)
{
	int character_counter = 0;
	int string_length = 0;
	int half_string_character_counter = 0;

	while (str[character_counter] != '\0')
		character_counter++;

	string_length = character_counter--;

	half_string_character_counter = string_length / 2;

	while (half_string_character_counter < string_length)
	{
		_putchar(str[half_string_character_counter]);
		half_string_character_counter++;
	}
	_putchar('\n');
}
