#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * Description: "takes in a string
 * ptints the string in reverse, each character after another"
 *
 * @s: string_pointer
 *
 * Return: Always Nothing
 */

void _print_rev_recursion(char *s)
{
	int string_length = strlen(s);
	char *string_pointer = s;

	printf("%d-", string_length);

	if (string_length != 0)
	{
		_putchar(string_pointer[string_length - 1]);
		string_pointer[string_length - 1] = '\0';
		printf("%d-", string_length);
		_print_rev_recursion(&string_pointer[0]);
	}
	else
		return;
}
