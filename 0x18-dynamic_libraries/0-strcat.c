#include "main.h"

/**
 * _strcat - concatinates two strings
 *
 * Description: takes in two strings dest (destination) and src (source)
 * appends the src string to the dest string
 * ovewrrits the terminating null character of the dest
 * after appending, it adds the terminating null byte.
 *
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: Always destination pointer (dest)
 */

char *_strcat(char *dest, char *src)
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
			character_counter < source_string_length;
			character_counter++)
		dest[destination_string_length + character_counter] = src[character_counter];

	return (dest);
}
