#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * Description: "takes a string pointer and a character
 * it then fills the character n number of times in the memory"
 *
 * @s: string pointer
 * @b: character to fill
 * @n: the number of bytes to fill
 *
 * Return: Always pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *string_pointer = s;
	char filling_character = b;
	unsigned int number_of_bytes = n;
	unsigned int bytes_counter = 0;

	for (; bytes_counter < number_of_bytes; bytes_counter++)
		string_pointer[bytes_counter] = filling_character;

	return (string_pointer);
}
