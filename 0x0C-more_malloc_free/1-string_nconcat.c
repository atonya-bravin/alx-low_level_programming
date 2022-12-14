#include "main.h"
#include <stdlib.h>

/**
 * _strlen - finds the length of the passed string
 *
 * @string: target string
 *
 * Return: Always string_length
 */
size_t _strlen(char *string)
{
	unsigned int string_length = 0;
	int subset_string_counter = 0;

	while (string[subset_string_counter] != '\0')
	{
		subset_string_counter++;
		string_length++;
	}
	return (string_length);
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes number of s2 characters to copy
 *
 * Return: pointer to concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatinated_string;
	unsigned int first_string_length = 0;
	unsigned int second_string_length = 0;
	unsigned int total_strings_length;
	unsigned int char_counter = 0;
	int s2_char_counter = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	first_string_length = _strlen(s1);
	second_string_length = _strlen(s2);

	if (n >= second_string_length)
		total_strings_length = first_string_length + second_string_length;
	else
		total_strings_length = first_string_length + n;
	concatinated_string = malloc(sizeof(char) * total_strings_length);
	if (concatinated_string == NULL)
		return (NULL);
	while (char_counter < first_string_length)
	{
		concatinated_string[char_counter] = s1[char_counter];
		char_counter++;
	}
	while (char_counter < total_strings_length)
	{
		concatinated_string[char_counter] = s2[s2_char_counter];
		char_counter++;
		s2_char_counter++;
	}
	return (concatinated_string);
}
