#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes with specific char.
 *
 * @size: the to use in intialization
 * @c: the character to intialize in memory
 *
 * Return: pointer to array (success) NULL (fail)
 */

char *create_array(unsigned int size, char c)
{
	int byte_size = sizeof(char) * size;
	char *character_pointer = (malloc(byte_size));
	unsigned int bytes_counter = 0;

	if (character_pointer == NULL)
		return (NULL);
	if (size == 0)
		return ('\0');

	else
	{
		for (; bytes_counter < size; bytes_counter++)
			character_pointer[bytes_counter] = c;
	}
	return (character_pointer);
}
