#include "main.h"

/**
 * puts2 - prints evry other character of a string
 *
 * Description: takes in a string and prints every second character
 *
 * @str: string pointer
 *
 * Return: Always Nothing
 */

void puts2(char *str)
{
	int character_counter = 0;

	while (str[character_counter] != '\0')
	{
		if (character_counter % 2 == 0)
			_putchar(str[character_counter]);
		character_counter++;
	}
	_putchar('\n');
}
