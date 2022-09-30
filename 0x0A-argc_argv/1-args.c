#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it
 *
 * Description: "takes in command line arguments then
 * prints the number of arguments passed to it"
 *
 * @argc: the number of arguments passed through the command line
 * @argv: the arguments passed through the command line
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
