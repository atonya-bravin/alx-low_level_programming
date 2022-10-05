#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * Desctiption: "uses a variable c to determine
 * whether a character is a character"
 *
 *@c: used to determine whether a character is a lower or upper case
 *
 * Return: 1 (success) 0 (fail)
 */

int _isalpha(int c)
{
	int lowerCase_firstLetter_number = 97;
	int lowerCase_lastLetter_number = 122;
	int upperCase_firstLetter_number = 65;
	int upperCase_lastLetter_number = 90;

	if (((c >= lowerCase_firstLetter_number) &&
		(c <= lowerCase_lastLetter_number)) ||
		((c >= upperCase_firstLetter_number) &&
		 (c <= upperCase_lastLetter_number)))
	{
		return (1);
	}
	else
		return (0);
}
