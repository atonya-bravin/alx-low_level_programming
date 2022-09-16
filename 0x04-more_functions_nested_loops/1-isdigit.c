#include "main.h"

/**
 * _isdigit - digit checker
 *
 * Description: takes in a value and uses the value to
 * check whether it is a digit
 *
 * @c: the parameter of the value that is tested
 *
 * Return: either 1(success) 0(fail)
 *
 */

int _isdigit(int c)
{
	int first_digit_number = 48;
	int last_digit_number = 57;

	if ((c >= first_digit_number) && (c <= last_digit_number))
		return (1);
	else
		return (0);
}
