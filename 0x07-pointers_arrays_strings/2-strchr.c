#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * Description: takes in a string and a character to find
 * finds the first occurence of our target character
 * returns the pointer to the first occurence of the target character
 *
 * @s: string to search character from
 * @c: character to search for
 *
 * Return: Always character poiter
 */

char *_strchr(char *s, char c)
{
	char *target_string = s;
	char target_character = c;
	char *returning_pointer = NULL;
	int character_counter;

	for (character_counter = 0;
			target_string[character_counter] != '\0'; character_counter++)
	{
		if (target_string[character_counter] == target_character)
		{
			return (&target_string[character_counter]);
		}
	}
	return (returning_pointer);
}
