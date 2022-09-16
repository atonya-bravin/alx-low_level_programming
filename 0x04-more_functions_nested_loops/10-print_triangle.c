#include "main.h"

/**
 *print_triangle - prints a triagle
 *
 * Description: "takes in a number as the size of the triangle
 * it prints the triangle using #
 * if the size is < 0, we only print #"
 *
 * @size: size of triangle
 *
 * Return: Always Nothing
 */

void print_triangle(int size)
{
	int lineCounter = 0;
	int numberOfLines = size;
	int numberOfPrints = size;
	int printsCounter = 0;
	int numberOfSpaces = 0;
	int spaceCounter = 0;

	if (numberOfPrints <= 0)
		_putchar('\n');
	else
	{
		while (lineCounter < numberOfLines)
		{
			numberOfSpaces = numberOfLines - lineCounter;
			spaceCounter = 0;
			while (spaceCounter < numberOfSpaces)
			{
				_putchar(' ');
				spaceCounter++;
			}

			printsCounter = 0;
			while (printsCounter <= lineCounter)
			{
				_putchar('#');
				printsCounter++;
			}
			_putchar('\n');
			lineCounter++;		}
	}

}
