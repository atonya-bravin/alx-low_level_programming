#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'this program print alphabets
 * both in upper and lower case'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_letter_number = 0;
	int last_letter_number = 123;

	for(first_letter_number = 97;
			first_letter_number < last_letter_number;
			first_letter_number++)
	{
		putchar(first_letter_number);
		if(first_letter_number == 122)
		{
			first_letter_number = 64;
			last_letter_number = 91;	
		}
	}
	putchar('\n');
	return (0);
}
