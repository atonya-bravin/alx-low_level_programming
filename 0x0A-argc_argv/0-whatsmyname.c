#include <stdio.h>

/**
 * main - prints the name of a program followe by a new line
 *
 * Description: "takes in arguments from the command line and
 * prints the first argument"
 *
 * @argc: takes in the number of arguments passed in from command line
 * @argv: agument array holding arguments from command line
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
