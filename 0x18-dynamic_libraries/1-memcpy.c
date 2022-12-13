#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * Description: "takes two string pointers the
 * destination string and source string
 * it then copies n number of bytes from source to destination"
 *
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to copy
 *
 * Return: Always pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *source_string_pointer = src;
	char *destination_string_pointer = dest;
	unsigned int number_of_bytes = n;
	unsigned int bytes_counter = 0;

	for (; bytes_counter < number_of_bytes; bytes_counter++)
		destination_string_pointer[bytes_counter] =
			source_string_pointer[bytes_counter];

	return (destination_string_pointer);
}
