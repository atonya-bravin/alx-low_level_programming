#include <stdio.h>

/**
 * main - prints all argument it receives
 *
 * Description: "runs a loop through the arguments passed and prints them out"
 *
 * @argc: the number of arguments passed to the command line
 * @argv: the argument array
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	int arguments_counter = 0;

	for (; arguments_counter < argc; arguments_counter++)
		printf("%s\n", argv[arguments_counter]);

	return (0);
}
