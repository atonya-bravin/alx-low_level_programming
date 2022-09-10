#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: 'this program prints all the
 * alphabetical letters in lowercase'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int letter_count = 0;

	for (letter_count = 97; letter_count < 123; letter_count++)
	{
		putchar(letter_count);
	}
	putchar('\n');
	return (0);
}
