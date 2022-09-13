#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * Description: "accepts an integral parameter then uses it to
 * know whether the character is lowercase or uppercase"
 *
 * @c: used to determine whether a character is in lowercase
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	if ((c > 97) && (c < 122))
		return (1);
	else
		return (0);
}
