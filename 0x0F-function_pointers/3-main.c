#include "3-calc.h"
#include <ctype.h>
#include <stdio.h>

/**
 * main - prints the appropriate outcome
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{	
	char *op;
       	op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (((*op == '/') && (argv[1][0] == '0')) || ((*op == '%') && (argv[1][0] == '0')))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]),atoi(argv[3])));
	return (0);
}
