#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 *
 * @name: the name to be printed
 * @f: function pointer to a passed function
 *
 * Return: Always Nothing
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		if (name)
			f(name);
	}
}
