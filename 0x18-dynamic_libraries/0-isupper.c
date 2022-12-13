#include "main.h"

/**
 * _isupper - uppercase checker
 *
 * Description: check for the uppercase characters
 *
 * @c: the integer value used to determine the case
 *
 * Return: Either 1 or 0
 */

int _isupper(int c)
{
	int first_character_number = 65;
	int last_character_number = 90;

	if ((c >= first_character_number) && (c <= last_character_number))
	{
		return (1);
	}
	else
		return (0);
}
