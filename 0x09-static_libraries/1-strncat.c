#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * Description: "takes two stings dest and src and one integer(n)
 * it uses only n characters of the src string
 * src does not need to be null-teminated"
 *
 * @src : source string pointer
 * @dest: destination string pointer
 * @n: number of src characters to use
 *
 * Return: Always destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int character_counter;
	int proposed_src_string_length = n;
	int destination_string_length = 0;

	for (character_counter = 0;
			dest[character_counter] != '\0';
			character_counter++)
		destination_string_length++;

	for (character_counter = 0;
			(character_counter < proposed_src_string_length)
			&& (src[character_counter] != '\0');
			character_counter++)
		dest[destination_string_length + character_counter] = src[character_counter];

	dest[destination_string_length + character_counter] = '\0';

	return (dest);
}
