#include "main.h"

/**
 * binary_to_uint - converts binary to decimal
 *
 * @b: string containing 0s and 1s
 *
 * Return: 0(fail) or converted number (success)
 */

unsigned int binary_to_uint(const char *b)
{
	const char *binary_string = b;
	int char_counter = 0;
	unsigned int base_10 = 0;

	if (binary_string == NULL)
		return (0);

	while (binary_string[char_counter] != '\0')
	{
		if ((int)binary_string[char_counter] == 49)
		{
			base_10 = (base_10 * 2) + 1;
		}
		else if ((int)binary_string[char_counter] == 48)
		{
			base_10 = (base_10 * 2) + 0;
		}
		else
			return (0);
		char_counter++;
	}
	return (base_10);
}
