#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'this program
 * prints all digits of base 10'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		printf("%d", counter);
	}
	putchar('\n');

	return (0);
}
