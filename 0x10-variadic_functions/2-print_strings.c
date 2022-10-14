#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints the strings passed to it followed by a new line
 *
 * @separator: the character that seperates the strings
 * @n: the number of strings to be passed
 *
 * Return: Always Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argument_list;
	unsigned int argument_counter = 0;
	char *argument_content_holder;

	va_start(argument_list, n);


	for (; argument_counter < n; argument_counter++)
	{
		argument_content_holder = va_arg(argument_list, char *);
		if (argument_content_holder == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", argument_content_holder);
		if (separator != NULL)
		{
			if (argument_counter < (n - 1))
				printf("%s", separator);
		}
	}

	va_end(argument_list);
	printf("\n");
}
