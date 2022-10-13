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
	char *op_arr[] = {"+", "-", "/", "%", "*"};
	
	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != op_arr[0][0] && argv[2][0] != op_arr[1][0] && argv[2][0] != op_arr[2][0] &&
			argv[2][0] != op_arr[3][0] && argv[2][0] != op_arr[4][0])
	{
		printf("Error\n");
		exit(99);
	}
	if (((argv[2][0] == op_arr[2][0]) && (argv[1][0] == '0')) || ((argv[2][0] == op_arr[3][0]) && (argv[1][0] == '0')))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]),atoi(argv[3])));
	return (0);
}
