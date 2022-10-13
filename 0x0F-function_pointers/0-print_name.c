#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name
 *
 i* @name: the name to be printed
 * @f: function pointer to a passed function
 *
 * Return: Always Nothing
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
