#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * Description: "gets two string pointers a string and a random string
 * checks whether the characters in the segmen occur in the string then
 * calculates the accumulative number of occurences"
 *
 * @s: string pointer
 * @accept: segment string pointer
 *
 * Return: Always number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	char *string_pointer = s;
	char *random_string_checker = accept;
	int cumulative_total = 0;
	int real_string_byte_counter = 0;
	int random_string_byte_counter;

	for (; string_pointer[real_string_byte_counter] != ' ';
			real_string_byte_counter++)

	{
		for (random_string_byte_counter = 0;
				random_string_checker[random_string_byte_counter] != '\0';
				random_string_byte_counter++)
		{
			if (random_string_checker[random_string_byte_counter] ==
					string_pointer[real_string_byte_counter])
				cumulative_total++;
		}
	}

	return (cumulative_total);
}
