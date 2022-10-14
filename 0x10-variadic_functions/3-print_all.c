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
	int char_counter = 0;
	bool break_out = false;

	va_list argument_list;

	va_start(argument_list, format);

	while(format != NULL && (!break_out))
	{
		while (format[char_counter] != '\0')
		{
			if (format[char_counter] == 'c' || format[char_counter] == 'i' ||
					format[char_counter] == 'f' || format[char_counter] == 's')
			{
				switch (format[char_counter])
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
				if (format[char_counter + 1] != '\0')
					printf(", ");
				switch (format[char_counter + 1])
				{
					case '\0':
						break_out = true;
						break;
					default:
						break;
				}

			}
			char_counter++;

		}
	}
	va_end(argument_list);
	printf("\n");
}
