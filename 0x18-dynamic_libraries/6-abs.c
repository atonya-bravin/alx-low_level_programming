#include "main.h"

/**
 * _abs - compute absolute
 *
 * Description: "gets a number and computes the absolute"
 *
 * @c: the number to compute absolute
 *
 * Return: Always absolute value
 */

int _abs(int c)
{
	if (c < 0)
		return (((c) + (c * -2)));
	else
		return (c);
}
