#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 *
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: new string pointer(success) NULL (fail)
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string_pointer;
	int total_bytes = 0;
	int char_counter;
	int second_str_counter;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (char_counter = 0; s1[char_counter] != '\0'; char_counter++)
		total_bytes++;
	for (char_counter = 0; s2[char_counter] != '\0'; char_counter++)
		total_bytes++;
	new_string_pointer = malloc(sizeof(char) * (total_bytes + 1));
	if (new_string_pointer == NULL)
		return (NULL);
	char_counter = 0;
	second_str_counter = 0;
	while (s1[char_counter] != '\0')
	{
		new_string_pointer[char_counter] = s1[char_counter];
		char_counter++;
	}
	while (s2[second_str_counter] != '\0')
	{
		new_string_pointer[char_counter] = s2[second_str_counter];
		char_counter++;
		second_str_counter++;
	}
	new_string_pointer[total_bytes + 1] = '\0';
	return (new_string_pointer);
}
