#include "main.h"
#include <stdlib.h>

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
	int first_string_len = 0;
	int second_string_len = 0;
	int number_of_bytes = n;
	char *new_string_pointer;
	int char_counter = 0;
	int total_string_len;
	int sec_string_char_counter = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[first_string_len] != '\0')
		first_string_len++;

	while (s2[second_string_len] != '\0')
		second_string_len++;

	if (number_of_bytes >= second_string_len)
		total_string_len = first_string_len + 1 + second_string_len;
	else
		total_string_len = first_string_len + 1 + number_of_bytes;
	new_string_pointer = malloc(sizeof(char) * total_string_len);
	if (new_string_pointer == NULL)
		return (NULL);
	while (char_counter < first_string_len)
	{
		new_string_pointer[char_counter] = s1[char_counter];
		char_counter++;
	}
	while (char_counter < total_string_len)
	{
		new_string_pointer[char_counter] = s2[sec_string_char_counter];
		char_counter++;
		sec_string_char_counter++;
	}
	new_string_pointer[total_string_len] = '\0';
	return (new_string_pointer);
}
