#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'The program prints letters in lowercase except q and e'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_letter_number;
	int last_letter_number = 122;

	for (first_letter_number = 97;
		first_letter_number <= last_letter_number;
		first_letter_number++)
	{
		if ((first_letter_number == 113) ||
			(first_letter_number == 101))
		{
			continue;
		}
		else
		{
			putchar(first_letter_number);
		}
	}
	putchar('\n');

	return (0);
}
