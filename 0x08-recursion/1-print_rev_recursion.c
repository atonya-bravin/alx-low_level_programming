#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	char *dest_string;
	char *src_string = s;

	if(src_string)
	{
		dest_string = malloc(sizeof(char) * strlen(src_string));
		strncpy(dest_string, src_string,  (strlen(src_string) - 1));
		printf("%c", src_string[(strlen(dest_string))]);
		if (strlen(dest_string) != 0)
			_print_rev_recursion(dest_string);
	}
}
