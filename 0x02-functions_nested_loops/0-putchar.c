#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'prints _putchar followed by a new line'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char output[] = "_putchar";
	int string_size = (int)(sizeof(output) / sizeof(output[0]));
	int character_counter;

	for (character_counter = 0;
			character_counter < (string_size - 1);
			character_counter++)
	{
		_putchar(output[character_counter]);
	}
	_putchar('\n');
	return (0);
}
