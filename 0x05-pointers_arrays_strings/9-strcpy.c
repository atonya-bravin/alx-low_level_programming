#include "main.h"

/**
 * _strcpy - copies a string
 *
 * Description: takes in a string and copies it icluding null byte
 *
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: Always destination pointer
 *
 */

char *_strcpy(char *dest, char *src)
{
	int string_length;
	int character_counter;
	char tmp;

	for (character_counter = 0; src[character_counter] !=
			'\0'; character_counter++)
	{
		string_length++;
	}

	for (character_counter = 0; character_counter <
			string_length; character_counter++)
	{
		tmp = src[character_counter];
		dest[character_counter] = tmp;
	
	}
	return (dest);
}
