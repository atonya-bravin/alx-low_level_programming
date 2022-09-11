#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'this program prints all base 10 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_character_number;
	int last_character_number = 57;

	for (first_character_number = 48;
			first_character_number <= last_character_number;
			first_character_number++)
	{
		putchar(first_character_number);
	}
	putchar('\n');

	return (0);
}
