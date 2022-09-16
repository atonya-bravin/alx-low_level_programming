#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * Description: "it prints _ a number of times
 * each line printed should end with \n
 * if the nuber of times _ should be printed is 0, we should print \n"
 *
 * @n: the number of times _ will be printed
 *
 * Return: Always Nothing
 */

void print_line(int n)
{
	int printCounter = 0;
	int numberOfPrints = n;

	while (printCounter < numberOfPrints)
	{
		_putchar('_');
		printCounter++;
	}
	_putchar('\n');
}
