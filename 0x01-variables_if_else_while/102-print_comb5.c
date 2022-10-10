#include <stdio.h>


/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Description: prints all base 10 numbers using putchar to make combinations
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_number;
	int second_number;
	int third_number;
	int fourth_number;

	for (first_number = 0; first_number < 10; first_number++)
	{
		for (second_number = 0; second_number < 9; second_number++)
		{
			for (third_number = 0; third_number < 10; third_number++)
			{
				for (fourth_number = 0; fourth_number < 10; fourth_number++)
				{
					putchar(first_number + '0');
					putchar(second_number + '0');
					putchar(' ');
					putchar(third_number + '0');
					putchar(fourth_number + '0');
					if (first_number == 9 && second_number == 8 && third_number == 9 && fourth_number == 9)
					{
						putchar('\n');
						return (0);
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
