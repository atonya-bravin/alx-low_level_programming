#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints all the numbers passed to it
 *
 * @separator: the separator between two numbers
 * @n: the number of parameters passed to the function
 *
 * Return: Always Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int argument_counter = 0;
	va_list argument_list;
	int argument_content_holder;

	va_start(argument_list, n);

	for (; argument_counter < n; argument_counter++)
	{
		argument_content_holder = va_arg(argument_list, int);
		printf("%d", argument_content_holder);
		if (separator != NULL && argument_counter < (n - 1))
			printf("%s", separator);
	}

	va_end(argument_list);
	printf("\n");
}
