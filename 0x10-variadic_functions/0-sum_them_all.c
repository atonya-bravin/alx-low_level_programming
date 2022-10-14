#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - calculates the sum of its varying parameters
 *
 * @n: the number of elements the method is expected to act on
 *
 * Return: sum (succes) or 0 (fail)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int argument_counter = 0;
	int sum = 0;

	if (n == 0)
		return (0);


	va_start(arg_list, n);

	for (; argument_counter < n; argument_counter++)
	{
		sum += va_arg(arg_list, int);
	}

	va_end(arg_list);
	return (sum);
}
