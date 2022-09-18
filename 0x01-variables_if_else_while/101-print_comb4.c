#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: 'prints  all possible different combinations of three digits'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int first_number_counter;
	int second_number_counter;
	int third_number_counter;

	for (first_number_counter = 0;
			first_number_counter < 10;
			first_number_counter++)
	{
		for (second_number_counter = first_number_counter + 1;
			second_number_counter < 10;
			second_number_counter++)
		{
			for (third_number_counter = second_number_counter + 1;
				third_number_counter < 10;
				third_number_counter++)
			{
				putchar(first_number_counter + '0');
				putchar(second_number_counter + '0');
				putchar(third_number_counter + '0');
				if (first_number_counter < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
