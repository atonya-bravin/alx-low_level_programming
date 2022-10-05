#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * Description: "takes in two string pointers
 * searches for the first occurence of any of the
 * characters in random string in our string
 * returns the pointer to the byte in s that matches any character in string
 * return null otherwise"
 *
 * @s: string prointer
 * @accept: occurences string pointer
 *
 * Return: Either Null (fail) or pointer to s byte
 */

char *_strpbrk(char *s, char *accept)
{
	char *string_pointer = s;
	char *occurences_string_pointer = accept;
	int real_string_bytes_counter = 0;
	int random_string_bytes_counter;

	for (; string_pointer[real_string_bytes_counter] != '\0';
			real_string_bytes_counter++)
	{
		for (random_string_bytes_counter = 0;
				occurences_string_pointer[random_string_bytes_counter] != '\0';
				random_string_bytes_counter++)
		{
			if (occurences_string_pointer[random_string_bytes_counter] ==
					string_pointer[real_string_bytes_counter])
				return (&string_pointer[real_string_bytes_counter]);
		}
	}

	return (0);
}
