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
	int first_number;
	int last_number = 10;

	for (first_number = 0; first_number < last_number; first_number++)
	{
		putchar(first_number + '0');
	}
	putchar('\n');
	return (0);
}
