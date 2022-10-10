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
	int first_number = 0;
	int second_number;
	int second_number_holder = 1;
	int frst_first_number_cmb;
	int sec_first_number_cmb;
	int frst_second_number_cmb;
	int sec_second_number_cmb;

	for (first_number = 0; first_number < 99; first_number++)
	{
		for (second_number = second_number_holder;
				second_number < 100; second_number++)
		{
			frst_first_number_cmb = ((first_number - (first_number % 10)) / 10);
			sec_first_number_cmb = first_number % 10;
			frst_second_number_cmb = ((second_number - (second_number % 10)) / 10);
			sec_second_number_cmb = second_number % 10;

			putchar(frst_first_number_cmb + '0');
			putchar(sec_first_number_cmb + '0');
			putchar(' ');
			putchar(frst_second_number_cmb + '0');
			putchar(sec_second_number_cmb + '0');
			if (first_number == 98 && second_number == 99)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		second_number_holder++;
	}
	return (0);
}
