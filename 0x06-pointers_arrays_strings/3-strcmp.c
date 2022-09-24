#include "main.h"


/**
 * _strcmp - takes in two strings and compares them
 *
 * Description: compares the strings if they are equal in length
 * compares if the string contents are equal
 * if the string contents comparison value is equal to zero,
 * it should return 0
 * if the string contents coparison value is less than zero,
 * it should return a negative number
 * if the string contents comparison value is greater than zero,
 * it should return a positive number
 *
 * @s1: first string pointer
 * @s2: second string pointer
 *
 * Return: Always an integer
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; ++s1, ++s2)
		if (*s1 == 0)
			return (0);
	return (*(unsigned char *)s1 < *(unsigned char *)s2 ? -15 : 15);
}
