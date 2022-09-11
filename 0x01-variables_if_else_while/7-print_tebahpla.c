#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'This program prints all the alphabets in reverse'
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int last_character_number;
	int first_character_number = 97;

	for (last_character_number = 122;
			last_character_number >= first_character_number;
			last_character_number--)
	{
		putchar(last_character_number);
	}
	putchar('\n');
	return (0);
}
