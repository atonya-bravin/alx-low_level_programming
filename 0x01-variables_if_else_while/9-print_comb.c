#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'printsall possible combinations of single-digit numbers'
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int first_letter_number;
	int last_letter_number = 57;

	for (first_letter_number = 48;
			first_letter_number <= last_letter_number;
			first_letter_number++)
	{
		putchar(first_letter_number);
		if (first_letter_number < last_letter_number)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
