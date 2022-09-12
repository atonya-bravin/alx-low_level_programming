#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: 'prints  all possible different combinations of two digits'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int firstCombo_first_character_number;
	int secondCombo_first_character_number;
	int firstCombo_last_character_number = 57;
	int secondCombo_last_character_number = 57;
	
	for (firstCombo_first_character_number = 48;
			firstCombo_first_character_number < firstCombo_last_character_number;
			firstCombo_first_character_number++)
	{
		for (secondCombo_first_character_number = 48;
				secondCombo_first_character_number <= secondCombo_last_character_number;
				++secondCombo_first_character_number)
		{	
			putchar(firstCombo_first_character_number);
			putchar(secondCombo_first_character_number);
			if (firstCombo_first_character_number < firstCombo_last_character_number)
			{
				putchar(',');
				putchar(' ');
			}
		}
		secondCombo_first_character_number++;
	}
	putchar('\n');
	return (0);
}
