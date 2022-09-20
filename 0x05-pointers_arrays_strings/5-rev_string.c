#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string - prints string in reverse
 *
 * Description: takes in a string and prints in reverse
 *
 * @s: string pointer
 *
 * Return: Always Nothing
 */

void rev_string(char *s)
{
	int string_length = 0;
	char temp;
	int character_counter = 0;

	while (s[string_length] != '\0')
		string_length++;

	while (character_counter < string_length / 2)
	{
		temp = s[(string_length - character_counter) - 1];
		s[(string_length - character_counter) - 1] = s[character_counter];
		s[character_counter] = temp;	
		character_counter++;
	}
}
