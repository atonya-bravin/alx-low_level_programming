#include<stdio.h>
#include<stdlib.h>
/**
 * main- used to print the opcodes
 * @argc: the number of parameters.
 * @argv: the shell arguments array
 * Return: 0 in succes
 */
int main(int argc, char *argv[])
{
	int counter;
	int first_argument;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	first_argument = atoi(argv[1]);
	if (first_argument < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (counter = 0; counter < first_argument; counter++)
	{
		printf("%02hhx", *((char *)main + counter));
		if (counter < first_argument - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
