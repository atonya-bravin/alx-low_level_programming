#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>

/**
 * print_all - prints anything
 *
 * @format: format string to use as guide to what type to expect
 *
 * Return: Always Nothing
 */

void print_all(const char * const format, ...)
{
	int c = 0;
	va_list argument_list;

	va_start(argument_list, format);
	while (format != NULL && format[c] != '\0')
	{
		if (format[c] == 'c' || format[c] == 'i' ||
				format[c] == 'f' || format[c] == 's')
		{
			switch (format[c])
			{
				case 'c':
					printf("%c", va_arg(argument_list, int));
					break;
				case 'i':
					printf("%d", va_arg(argument_list, int));
					break;
				case 'f':
					printf("%f", va_arg(argument_list, double));
					break;
				default:
					printf("%s", va_arg(argument_list, char*));
					break;
			}
			if (format[c + 1] != '\0')
				printf(", ");
		}
		c++;
	}
	va_end(argument_list);
	printf("\n");
}
