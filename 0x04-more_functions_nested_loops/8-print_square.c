#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * Description: "takes in a value, and uses that value to print a square
 * if the value is less that 0 or 0 it prints only a new line
 * the squares are drawn using #"
 *
 * @size: the size of the square
 *
 * Return: Always nothing
 */

void print_square(int size)
{
	int printCounter;
	int numberOfPrints = size;
	int numberOfLines = size;
	int linesCounter;

	if (numberOfPrints <= 0)
		_putchar('\n');
	else
	{
		linesCounter = 0;
		while (linesCounter < numberOfLines)
		{
			printCounter = 0;
			while (printCounter < numberOfPrints)
			{
				_putchar('#');
				printCounter++;
			}
			_putchar('\n');
			linesCounter++;
		}
	}
}

