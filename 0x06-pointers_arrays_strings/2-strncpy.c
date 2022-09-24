#include "main.h"
#include <stdio.h>

/**
 * _strncpy - works exactly like strcpy
 *
 * Description: takes two strings and returns its concatination
 *
 *
 * @dest: destination pointer
 * @src: source string pointer
 * @n: string length to print
 *
 * Return: Always destination pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int character_counter;
	int source_string_length = 0;
	int proposed_string_length = n;

	for (character_counter = 0;
			src[character_counter] != '\0';
			character_counter++)
		source_string_length++;

	for (character_counter = 0;
			character_counter < proposed_string_length
			&& src[character_counter] != '\0';
			character_counter++)
		dest[character_counter] = src[character_counter];

	for ( ; source_string_length < n; source_string_length++)
		dest[source_string_length] = '\0';

	return (dest);
}
