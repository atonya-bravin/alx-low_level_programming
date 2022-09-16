#include "main.h"

/**
 * more_numbers - prints 0 to 14
 *
 * Description: prints 0 to 14 followed by new line
 *
 * Return: Always Nothing
 */

void more_numbers(void)
{
	int printCounter;
	int numberCounter;

	for (printCounter = 0; printCounter < 10; printCounter++)
	{
		for (numberCounter = 0; numberCounter < 15; numberCounter++)
		{
			if (numberCounter >= 10)
				_putchar(((numberCounter - (numberCounter % 10)) / 10) + '0');
			_putchar((numberCounter % 10) + '0');
		}
		_putchar('\n');
	}
}
