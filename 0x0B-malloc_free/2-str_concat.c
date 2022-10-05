#include "main.h"
#include <stdlib.h>

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
	char *first_pointer = s1;
	char *second_pointer = s2;
	char *new_string_pointer;
	int total_bytes = 0;
	int char_counter;
	int second_str_counter;

	if (first_pointer == NULL)
	{
		first_pointer = malloc(sizeof(char) * 2);
		first_pointer[1] = "";
		first_pointer[0] = '\0';
	}
	if (second_pointer == NULL)
	{
		second_pointer = malloc(sizeof(char) * 1);
		second_pointer[1] = "";
		second_pointer[0] = '\0';
	}
	for (char_counter = 0; s1[char_counter] != '\0'; char_counter++)
		total_bytes++;
	for (char_counter = 0; s2[char_counter] != '\0'; char_counter++)
		total_bytes++;
	new_string_pointer = malloc(sizeof(char) * total_bytes);

	if (new_string_pointer == NULL)
		new_string_pointer[0] = '\0';
	char_counter = 0;
	second_str_counter = 0;
	while (first_pointer[char_counter] != '\0')
	{
		new_string_pointer[char_counter] = first_pointer[char_counter];
		char_counter++;
	}
	while (second_pointer[second_str_counter] != '\0')
	{
		new_string_pointer[char_counter] = second_pointer[second_str_counter];
		char_counter++;
		second_str_counter++;
	}
	return (new_string_pointer);
}
