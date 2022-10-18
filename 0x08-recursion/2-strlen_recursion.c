#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string we are to look for the length
 *
 * Return: the length of string
 *
 */

int _strlen_recursion(char *s)
{
	char *src_string = s;

	if (*src_string == '\0')
		return (0);

	src_string++;

	return (_strlen_recursion(src_string) + 1);
}
