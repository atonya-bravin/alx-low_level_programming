#include "main.h"


/**
 * string_toupper - converts all characters in a string to uppercase
 *
 * Description: takes an integer and converts it to an integer
 *
 * @a: string pointer
 *
 * Return: Always: character pointer
 *
 */

char *string_toupper(char *a)
{
	char *target_string_pointer = a;
	int character_counter;
	int lower_character_number;
	int upper_character_number;
	int lower_case_start = 97;
	int upper_case_start = 65;

	for (character_counter = 0;
			target_string_pointer[character_counter] != '\0'; character_counter++)
	{
		if ((int)target_string_pointer[character_counter] <= 122 &&
				(int)target_string_pointer[character_counter] >= 97)
		{
			lower_character_number = (int)target_string_pointer[character_counter];
			upper_character_number =
				(lower_character_number - lower_case_start) + upper_case_start;
			target_string_pointer[character_counter] = (char)upper_character_number;
		}
	}
	return (a);
}
