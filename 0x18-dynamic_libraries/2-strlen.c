#include "main.h"
/**
 * _strlen - returns length of a string
 *
 * Description: takes in a string and returns its length
 *
 * @s: the string pointer
 *
 * Return: Always string length
 *
 */

int _strlen(char *s)
{
	int character_counter = 0;

	while (s[character_counter] != '\0')
		character_counter++;
	return (character_counter);
}
