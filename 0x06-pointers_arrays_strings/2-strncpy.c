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
	int destination_string_length = 0;

	for (character_counter = 0;
			dest[character_counter] != '\0';
			character_counter++)
		destination_string_length++;

	for (character_counter = 0;
			src[character_counter] != '\0';
			character_counter++)
		source_string_length++;

	for (character_counter = 0;
			character_counter < n;
			character_counter++)
		dest[destination_string_length + character_counter] = src[character_counter];
	
	putchar('\n');
	return (dest);
}
