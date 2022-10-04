#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string pointer
 *
 * Return: duplicate string (success) NULL (fail)
 */

char *_strdup(char *str)
{
	char *original_string_pointer = str;
	char *copy_string_pointer;
	int character_counter = 0;
	int string_length = 0;

	if (original_string_pointer == NULL)
		return (NULL);
	while (original_string_pointer[character_counter] != '\0')
		character_counter++;

	string_length = character_counter;

	copy_string_pointer = (char *)malloc(sizeof(char) * (string_length + 1));

	character_counter = 0;

	while (character_counter < string_length)
	{
		copy_string_pointer[character_counter] =
			original_string_pointer[character_counter];
		character_counter++;
	}

	copy_string_pointer[character_counter + 1] = '\0';

	if (copy_string_pointer == NULL)
		return (NULL);

	return (copy_string_pointer);
}
