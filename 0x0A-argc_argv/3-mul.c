#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * Description: "the program should take in two numbers
 * should only calculate the multiplication if only the args are two."
 *
 * @argc: the number of arguments passed through the command line
 * @argv: the array of arguments passed through the command line
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	if ((argc - 1) == 2)
		printf("%d\n", ((atoi(argv[1])) * (atoi(argv[2]))));
	else
		printf("Error\n");

	return (0);
}
