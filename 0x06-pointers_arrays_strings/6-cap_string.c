#include "main.h"
#include <stdio.h>



/**
 * cap_string - converts all characters in a string to lowercase
 *
 * Description: takes an integer and converts it to an integer
 *
 * @a: string pointer
 *
 * Return: Always: character pointer
 *
 */

char *cap_string(char *a)
{
	char *target_string_pointer = a;
	int character_counter, lower_character_number, upper_character_number;
	int lower_case_start = 97, upper_case_start = 65;

	for (character_counter = 0;
			target_string_pointer[character_counter] != '\0'; character_counter++)
	{
		if (target_string_pointer[character_counter - 1] == '\t')
			target_string_pointer[character_counter - 1] = ' ';
		if (((int)target_string_pointer[character_counter] <= 90 &&
				 (int)target_string_pointer[character_counter] >= 65) ||
				((int)target_string_pointer[character_counter] <= 122 &&
				 (int)target_string_pointer[character_counter] >= 97))
		{
			if (target_string_pointer[character_counter - 1] == ' ' ||
					target_string_pointer[character_counter - 1] == '\t' ||
					target_string_pointer[character_counter - 1] == '\n' ||
					target_string_pointer[character_counter - 1] == ',' ||
					target_string_pointer[character_counter - 1] == ';' ||
					target_string_pointer[character_counter - 1] == '.' ||
					target_string_pointer[character_counter - 1] == '!' ||
					target_string_pointer[character_counter - 1] == '?' ||
					target_string_pointer[character_counter - 1] == '"' ||
					target_string_pointer[character_counter - 1] == '(' ||
					target_string_pointer[character_counter - 1] == ')' ||
					target_string_pointer[character_counter - 1] == '{' ||
					target_string_pointer[character_counter - 1] == '}')
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
		}
	}
	return (a);
}
