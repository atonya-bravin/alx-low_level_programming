#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * rev_string - prints string in reverse
 *
 * Description: takes in a string and prints in reverse
 *
 * @s: string pointer
 *
 * Return: Always Nothing
 */

void rev_string(char *s)
{
	int string_length = 0;

	while (s[string_length] != '\0')
		string_length++;

	string_length--;

	while (string_length >= 0)
	{
		putchar(s[string_length]);
		string_length--;
	}
	putchar('\n');
	exit(0);
}
