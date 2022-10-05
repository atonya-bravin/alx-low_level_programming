#include "main.h"

/**
 * _strstr - locates a substring
 *
 * Description: "takes in two string pointers
 * the full string and the substring to search for
 * tries to find the first occurence of the substring in the string"
 *
 * @haystack: full string pointer
 * @needle: substring pointer
 *
 * Return: Either NULL (fail) or pointer to first occurence of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int substring_length = 1;
	int substring_character_counter;
	char *substring_pointer = needle;
	char *full_string_pointer = haystack;
	int full_string_character_counter;
	int first_occurence_position;
	int number_of_matching_characters;
	int matching_characters_counter;

	for (substring_character_counter = 0;
			substring_pointer[substring_character_counter] != '\0';
			substring_character_counter++)
		substring_length = substring_character_counter;

	for (full_string_character_counter = 0; 
			full_string_pointer[full_string_character_counter] != '\0';
			full_string_character_counter++)
	{
		if (substring_pointer[0] == full_string_pointer[full_string_character_counter])
		{
			first_occurence_position = full_string_character_counter;
			number_of_matching_characters = 1;
			matching_characters_counter = full_string_character_counter;
			for (substring_character_counter = 0;
					number_of_matching_characters <= substring_length;
					substring_character_counter++)
			{
				if (full_string_pointer[matching_characters_counter] ==
						substring_pointer[substring_character_counter])
					matching_characters_counter++;
			}
		}
	}
	if (matching_characters_counter == substring_length)
		return (&full_string_pointer[first_occurence_position]);

	return (0);
}
