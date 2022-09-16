#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * Description: "takes in a number and prints \ that number of times
 * the diagonal ends with \n
 * if n is less than 0 the function prints \n"
 *
 * @n: number of times _ should be printed
 *
 * Return: Always Nothing
 */

void print_diagonal(int n)
{
	int printCounter = 0;
	int numberOfPrint = n;
	int indentCounter;
	int numberOfindents;

	while (printCounter < numberOfPrint)
	{
		numberOfindents = printCounter;
		for (indentCounter = 0; indentCounter < numberOfindents; indentCounter++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		printCounter++;
	}
	if (numberOfPrint <= 0)
		_putchar('\n');

}
